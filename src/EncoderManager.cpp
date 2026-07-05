#include "EncoderManager.h"

EncoderManager::EncoderManager(EventQueue& q) : queue(q) {}

void EncoderManager::begin() {
  // init I2C encoder hardware later
}

void EncoderManager::update() {
  // stub encoder polling
}
