#include "sysio.h"
#include "ser.h"
#include "serf.h"

//#include <stdio.h>

#define NAME_LENGTH 20

#define MS 102

typedef struct {
    int led;
    char letter;
    int onTime;
    int offTime;
} ledCycle;

ledCycle greenCycle;
ledCycle redCycle;

ledCycle cycles[2];

int cyclesIndex;

Boolean On = NO;
Boolean displayCycle = NO;

fsm blinker {
    state Check_PERIOD:
        if(On)
            leds(cycles[cyclesIndex].led, 1);
            if(displayCycle) {
                ser_outf(Check_PERIOD, "%c ", cycles[cyclesIndex].letter);
            }
        else
            leds(cycles[cyclesIndex].led, 0);
        delay(cycles[cyclesIndex].onTime * MS,OFF_PERIOD);
        when(&On, Check_PERIOD);
        release;
    state OFF_PERIOD:
        leds(cycles[cyclesIndex].led, 0);

        int offTime = cycles[cyclesIndex].offTime;
        
        cyclesIndex = (cyclesIndex + 1) % 2;
        
        delay(offTime * MS,Check_PERIOD);
        when(&On, Check_PERIOD);
        release;
}

void initCycles() {
    redCycle.led = 0;
    redCycle.letter = 'R';
    redCycle.onTime = 0;
    redCycle.offTime = 0;

    greenCycle.led = 1;
    greenCycle.letter = 'G';
    greenCycle.onTime = 0;
    greenCycle.offTime = 0;

    cycles[0] = redCycle;
    cycles[1] = greenCycle;

    cyclesIndex = 0;
}

int processSettingsInput(char * settingsInput){
    int numbers[3];
    int numbersIndex = 0;

    int number = 0;
    int numberMultiplier = 1;

    for (int i = strlen(settingsInput); i >= 0; i++) {
        if(settingsInput[i] == ' ') {
            numbers[numbersIndex] = number;
            number = 0;
            numbersIndex++;
            numberMultiplier = 1;
        } else if (settingsInput[i] >= '0' && settingsInput[i] <= '9') {
            number += number * numberMultiplier;
            numberMultiplier = numberMultiplier * 10;
        } else {
            return 1;
        }
    }

    redCycle.onTime = numbers[2];
    redCycle.offTime = numbers[1];

    greenCycle.onTime = numbers[0];
    greenCycle.offTime = number;

    return 0;    
}

fsm root {

    char username[NAME_LENGTH];
    char * settings;
        
    state Initial:
        initCycles();

        ser_outf(Initial, "Enter your name: ");

    state Get_Name:
        ser_in(Get_Name, username, NAME_LENGTH);
        //runfsm blinker;

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

        proceed Get_Choice;

    state Adjust_Intervals:
        ser_outf(Initial, "Enter the intervals (Red ON, OFF, Green ON, OFF): ");

    state Set_Intervals:
        ser_in(Get_Name, settings, NAME_LENGTH);

        processSettingsInput(settings);

        proceed Show_Menu;

    state View_Settings:
        ser_outf(View_Settings, "(Red ON, OFF, Green ON, OFF) intervals: (%d, %d, %d, %d)\n\r",
            cycles[0].onTime,
            cycles[0].offTime,
            cycles[1].onTime,
            cycles[1].offTime
        );

        proceed Show_Menu;

    state Monitor:
        ser_outf(Monitor, "Monitor (press S to stop): ");
        displayCycle = YES;

    state Await_Stop:
        char ch;
        ser_inf(Await_Stop, "%c", ch);
        
        if(ch == 'S' || ch == 's'){
            displayCycle = NO;
            proceed Show_Menu;
        }
        
        proceed Await_Stop;

    state Stop:
        leds(1, 0);
        leds(0, 0);
}