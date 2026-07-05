#pragma once
#include "EventQueue.h"
class DisplayManager{EventQueue&q;public:DisplayManager(EventQueue&qq):q(qq){} void begin();void update();};