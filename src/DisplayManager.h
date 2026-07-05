#pragma once
#include "EventQueue.h"

class DisplayManager {
public:
  DisplayManager(EventQueue& q);
  void begin();
  void update();

private:
  EventQueue& queue;
};
