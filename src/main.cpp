#include <Arduino.h>
#include "Hardware.h"
#include "EventQueue.h"
#include "EncoderManager.h"
#include "DisplayManager.h"

EventQueue eventQueue;
EncoderManager encoders(eventQueue);
DisplayManager display(eventQueue);

void setup() {
  Serial.begin(115200);
  delay(200);

  Serial.println("M5MIDI v0.1.0 boot");

  encoders.begin();
  display.begin();

  Serial.println("Init complete");
}

void loop() {
  encoders.update();
  eventQueue.process();
  display.update();
}
