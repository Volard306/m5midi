#pragma once
#include "EventQueue.h"
class EncoderManager{EventQueue&q;public:EncoderManager(EventQueue&qq):q(qq){} void begin();void update();};