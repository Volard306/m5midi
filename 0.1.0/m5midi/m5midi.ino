#include "src/Hardware.h"
#include "src/EventQueue.h"
#include "src/EncoderManager.h"
#include "src/DisplayManager.h"
EventQueue eventQueue;
EncoderManager encoders(eventQueue);
DisplayManager display(eventQueue);
void setup(){Serial.begin(115200);delay(200);Serial.println("M5MIDI v0.1.0");encoders.begin();display.begin();}
void loop(){encoders.update();eventQueue.process();display.update();}
