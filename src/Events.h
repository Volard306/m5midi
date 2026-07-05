#pragma once
#include <stdint.h>

enum class EventType {
  EncoderMoved,
  ButtonPressed,
  ButtonReleased
};

struct Event {
  EventType type;
  int id;
  int value;
};
