#pragma once
#include "EventQueue.h"

class EncoderManager {
public:
  EncoderManager(EventQueue& q);
  void begin();
  void update();

private:
  EventQueue& queue;
};
