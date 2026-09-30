#include "SevSeg.h"

SevSeg sevseg; // Create an instance of the object

void setup() {
  byte numDigits = 1;
  byte digitPins[] = {}; // Leave empty for a single digit display
  
  // These are the Arduino pins connected to the display's A, B, C, D, E, F, G, and DP pins
  byte segmentPins[] = {2, 3, 4, 5, 6, 7, 8, 9}; 
  
  bool resistorsOnSegments = true; 
  
  // CHANGE THIS to COMMON_ANODE if your middle pins are connected to 5V
  byte hardwareConfig = COMMON_CATHODE; 
  
  // Initialize the display
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
  sevseg.setBrightness(90);
}

void loop() {
  // The ultimate shortcut: just type the number you want!
  sevseg.setNumber(4); 
  
  // This command actually pushes the number to the LEDs
  sevseg.refreshDisplay(); 
}