#pragma once
#include "Events.h"

class EventQueue {
public:
  void push(const Event& e);
  bool pop(Event& e);
  void process();
};
