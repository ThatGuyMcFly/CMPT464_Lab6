#include "sysio.h"
#include "ser.h"
#include "serf.h"

// Define max length of names and settings
#define NAME_LENGTH 20
#define SETTINGS_LENGTH 50

#define MS = 1024 / 1000

// Set up and initialize the cycle variables
int greenLed = 1;
char greenCharacter = 'G';
word greenOn = 0;
word greenOff = 0;

int redLed = 0;
char redCharacter = 'R';
word redOn = 0;
word redOff = 0;

// Flag for which LED cycle to show
int ledFlag = 0;

// Boolean flags for flashing the LEDs and showing the cycle characters
Boolean On = NO;
Boolean displayCycle = NO;

// Finite state machine for flashing the LEDs and displaying cycle characters
fsm blinker {
    int led;
    char ch;

    word onTime;
    word offTime;
    
    state Check_PERIOD:
        // Determine the LED, character and on and off times based on the desired LED
        if(ledFlag == 0) {
            led = redLed;
            ch = redCharacter;
            onTime = redOn;
            offTime = redOff;

            ledFlag = 1;
        } else {
            led = greenLed;
            ch = greenCharacter;
            onTime = greenOn;
            offTime = greenOff;

            ledFlag = 0;
        }

        // Turns the LED on or off depending on the state of On
        if(On)
            leds(led,1);
        else
            leds(led,0);
        
        // Whether to display the cycle character
        if (displayCycle)
            ser_outf(Check_PERIOD, "%c ", ch);

        // Set the delay if it is present
        if(onTime > 0)
            delay(onTime, OFF_PERIOD);
        
        when(&On, Check_PERIOD);
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
        release;
}

void processSettingsInput(char * settingsInput){
    word numbers[4];
    int numbersIndex = 0;

    word number = 0;

    // Extract the intervals from the settings input string
    for (int i = 0; i < SETTINGS_LENGTH; i++) {
        if(settingsInput[i] == ' ') {
            // seperate the input on the spaces
            numbers[numbersIndex] = number;
            number = 0;
            numbersIndex++;
        } else if (settingsInput[i] >= '0' && settingsInput[i] <= '9') {
            // only handle number character
            number = number * 10;
            number += settingsInput[i] - 48;
        }
    }

    redOn = numbers[0];
    redOff = numbers[1];

    greenOn = numbers[2];
    greenOff = numbers[3];
}

// Root finite state machine that handles user input
fsm root {

    char username[NAME_LENGTH];
        
    state Initial:
        ser_outf(Initial, "Enter your name: ");

    state Get_Name:
        ser_in(Get_Name, username, NAME_LENGTH);
    
    state Run_Blinker:
        runfsm blinker;

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

        processSettingsInput(settings);

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
        
        if(ch == 'S' || ch == 's'){
            displayCycle = NO;
            proceed Show_Menu;
        }
        
        proceed Monitor;

    state Stop:
        On = NO;

        leds(1, 0);
        leds(0, 0);

        proceed Show_Menu;
}