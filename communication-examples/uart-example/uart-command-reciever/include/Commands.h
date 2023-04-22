//
// Created by dhruv on 15/04/23.
//

#ifndef UART_COMMAND_RECIEVER_COMMANDS_H
#define UART_COMMAND_RECIEVER_COMMANDS_H
#include <Arduino.h>

// Control commands
String redOnCmd = "redLed:on";
String redOffCmd = "redLed:off";
String greenOnCmd = "greenLed:on";
String greenOffCmd = "greenLed:off";
String blueOnCmd = "blueLed:on";
String blueOffCmd = "blueLed:off";
String allOnCmd = "allLed:on";
String allOffCmd = "allLed:off";

// Status commands
String statusCmd = "status";

// feature command
String featureCmd = "feature";

// heartbeat command
String heartBeatCmd = "heartBeat";

// Response
String okResponse = "OK";
String failResponse = "FAIL";

String getStatusString(bool redStatus, bool greenStatus, bool blueStatus);
String getFeatureString();

#endif //UART_COMMAND_RECIEVER_COMMANDS_H
