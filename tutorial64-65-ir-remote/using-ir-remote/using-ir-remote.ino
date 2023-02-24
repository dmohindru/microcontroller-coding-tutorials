#include <IRremote.h>
int IRpin = 9;
IRrecv IR(IRpin);
decode_results cmd;
// mappings
#define pwr 0x45
#define volP 0x46
#define func 0x47
#define rewindB 0x44
#define play 0x40
#define forward 0x43
#define down 0x7
#define volM 0x15
#define up 0x9
#define zero 0x16
#define eq 0x19
#define st 0xD
#define one 0xC
#define two 0x18
#define three 0x5E
#define four 0x8
#define five 0x1C
#define six 0x5A
#define seven 0x42
#define eight 0x52
#define nine 0x4A
String command;

void setup() {
  Serial.begin(9600);
  IR.enableIRIn(); 

}

void loop() {
  //while (IR.decode(&cmd)== 0);
  while (IR.decode()== 0);
  switch(IR.decodedIRData.command) {
    case pwr:
      command = "power";
      break;
    case volP:
      command = "Volume Up";
      break;
    case func:
      command = "Function Stop";
      break;
    case rewindB:
      command = "Rewind back";
      break;
    case play:
      command = "Play";
      break;
    case forward:
      command = "Forward";
      break;
    case down:
      command = "Down";
      break;
    case volM:
      command = "Volume Down";
      break;
    case up:
      command = "Up";
      break;
    case zero:
      command = "Zero";
      break;
    case eq:
      command = "EQ";
      break;
    case st:
      command = "ST REPT";
      break;
    case one:
      command = "One";
      break;
    case two:
      command = "Two";
      break;
    case three:
      command = "Three";
      break;
    case four:
      command = "Four";
      break;
    case five:
      command = "Five";
      break;
    case six:
      command = "Six";
      break;
    case seven:
      command = "Seven";
      break;
    case eight:
      command = "Eight";
      break;
    case nine:
      command = "Nine";
      break;
    default:
      command = "unrecognised";
  }
  


  //Serial.println(IR.decodedIRData.command,HEX);
  Serial.println(command);
  delay(250);
  IR.resume();
  

}
