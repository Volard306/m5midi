#pragma once
#include "Events.h"
class EventQueue{public:void push(const Event&){} bool pop(Event&){return false;} void process(){};};