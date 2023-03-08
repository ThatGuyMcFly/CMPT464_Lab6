/**
 * Martin Knoetze
 * SN: 3086754
 * CMPT464 Lab6
 * Due: March 8th, 2023
 * 
 * app.cc
*/

#include "sysio.h"
#include "ser.h"
#include "serf.h"

// Define max length of names and settings
#define NAME_LENGTH 20
#define SETTINGS_LENGTH 50

#define SECOND 1024

// Set up and initialize the cycle variables
int greenLed = 1;
char greenCharacter = 'G';
word greenOn = 0;
word greenOff = 0;

int redLed = 0;
char redCharacter = 'R';
word redOn = 0;
word redOff = 0;

// Boolean flags for flashing the LEDs and showing the cycle characters
Boolean On = NO;
Boolean displayCycle = NO;
Boolean stopProcess = NO;

/**
 * Adjusts a time in milliseconds to the closets number of cycles
 * 
 * Parameter:
 *  time - the time in milliseconds
 * 
 * Return:
 *  The number of cycles to equal the time
*/
word adjustTime(word time) {
    return (time * SECOND)/1000;
}

// Finite state machine for flashing the LEDs and displaying cycle characters
fsm blinker {
    int led;
    char ch;

    word onTime;
    word offTime;

    // Flag for which LED cycle to show
    int ledFlag = 0;
        
    state Check_PERIOD:
        // Determine the LED, character and on and off times based on the desired LED
        if(ledFlag == 0) {
            led = redLed;
            ch = redCharacter;
            onTime = redOn;
            offTime = redOff;
        } else {
            led = greenLed;
            ch = greenCharacter;
            onTime = greenOn;
            offTime = greenOff;
        }
        
        // toggle the LED flag
        ledFlag = 1 - ledFlag;

        // adjust on and off times
        onTime = adjustTime(onTime);
        offTime = adjustTime(offTime);

        // Whether to display the cycle character
        if (displayCycle)
            ser_outf(Check_PERIOD, "%c ", ch);

        if(onTime > 0){
            // Turns the LED on
            leds(led,1);

            // Set the delay
            delay(onTime, OFF_PERIOD);
        } else {
            proceed OFF_PERIOD;
        }
        
        when(&On, Check_PERIOD);
        when(&stopProcess, Stop);
        release;
    state OFF_PERIOD:
        // turn off the LED that was turned on in the Check_PERIOD state
        leds(led,0);
        
        // Display the off character if required
        if (displayCycle)
            ser_outf(Check_PERIOD, "%c ", 'F');

        // Set the delay if it is set
        if(offTime > 0)
            delay(offTime, Check_PERIOD);
        else
            proceed Check_PERIOD;

        when(&On, Check_PERIOD);
        when(&stopProcess, Stop);
        release;
    state Stop:
        finish;

}

/**
 * Extracts the time intervals from the user input and assings the times
 * to their respective variables
 * 
 * Parameters:
 *  settingsInput: The string that holds the user inputted time intervals
 * 
 * Returns:
 *  Returns 0 if the input settings were processed successfully, and 1 if not
*/
int processSettingsInput(char * settingsInput){
    word numbers[] = {0, 0, 0};
    int numbersIndex = 0;

    word number = 0;

    // Extract the intervals from the settings input string
    for (int i = 0; i < strlen(settingsImput); i++) {
        if(settingsInput[i] == ' ') {
            // ignore consecutive spaces
            if(settingsInput[i] + 1 != ' '){
                // seperate the input on the spaces
                numbers[numbersIndex] = number;
                number = 0;
                numbersIndex++;
            }
        } else if (settingsInput[i] >= '0' && settingsInput[i] <= '9') {
            // only handle number character
            number = number * 10;
            number += settingsInput[i] - 48;
        } else {
            // can only have spaces and numbers
            return 1;
        }

        if(number < 0) {
            // can't have negative numbers
            return 1;
        }
    }

    redOn = numbers[0];
    redOff = numbers[1];

    greenOn = numbers[2];
    greenOff = number;

    return 0;
}

// Root finite state machine that handles user input
fsm root {

    char username[NAME_LENGTH];
    
    fsmcode blinkerCode;

    Boolean blinkerRunning = NO;
        
    state Initial:
        ser_outf(Initial, "Enter your name: ");

    state Get_Name:
        ser_in(Get_Name, username, NAME_LENGTH);

    state Show_Menu:
        ser_outf(Show_Menu, "Welcome %s\n\r"
"Select one of the following operations:\n\r"
"(A)djust Intervals and start\n\r"
"(S)top operation\n\r"
"(V)iew current setting\n\r"
"(M)onitor\n\r"
"Choice: ", username);

    state Get_Choice:
        char choice;
        
        ser_inf(Get_Choice, "%c", &choice);
        
        if (choice == 'A' || choice == 'a'){
            proceed Adjust_Intervals;
        } else if (choice == 'S' || choice == 's') {
            proceed Stop;
        } else if (choice == 'V' || choice == 'v') {
            proceed View_Settings;
        } else if (choice == 'M' || choice == 'm') {
            proceed Monitor;
        }

        proceed Show_Menu;

    state Adjust_Intervals:
        ser_outf(Initial, "Enter the intervals (Red ON, OFF, Green ON, OFF): ");

    state Set_Intervals:
        char settings[SETTINGS_LENGTH];

        ser_in(Set_Intervals, settings, SETTINGS_LENGTH);

        if(processSettingsInput(settings) != 0)
            proceed Adjust_Intervals;

    state Start_Blinker:

        if(!blinkerRunning) {
            // only calls the blinker fsm if it isn't running already
            blinkerCode = runfsm blinker;
            blinkerRunning = YES;
        } else {
            leds_all(0);

            killall(blinkerCode);

            trigger(&stopProcess);

            blinkerCode = runfsm blinker;
            blinkerRunning = YES;
        }

        On = YES;

        trigger(&On);

        proceed Show_Menu;

    state View_Settings:
        ser_outf(View_Settings, "(Red ON, OFF, Green ON, OFF) intervals: (%d, %d, %d, %d)\n\r",
            redOn,
            redOff,
            greenOn,
            greenOff
        );

        proceed Show_Menu;

    state Monitor:
        ser_outf(Monitor, "Monitor (press S to stop): ");
        displayCycle = YES;

    state Await_Stop:
        char ch;
        ser_inf(Await_Stop, "%c", &ch);
        
        // ensures monitoring only stops when 'S' or 's' are entered
        if(ch == 'S' || ch == 's'){
            displayCycle = NO;
            proceed Show_Menu;
        }
        
        proceed Monitor;

    state Stop:
        On = NO;

        // Makes sure that the blinker code hasa been assigned to an actual value first
        if(blinkerCode != 0x0) {
            killall(blinkerCode);
        }

        trigger(&stopProcess);

        // turn off all LEDs
        leds_all(0);

        proceed Show_Menu;
}