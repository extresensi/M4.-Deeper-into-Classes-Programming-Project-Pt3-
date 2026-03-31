// ParkingMeter.cpp
#include "ParkingMeter.h"

ParkingMeter::ParkingMeter() : minutesPurchased(0) {}
ParkingMeter::ParkingMeter(int minutesPurchased_) : minutesPurchased(minutesPurchased_) {}

int ParkingMeter::getMinutesPurchased() const { return minutesPurchased; }
void ParkingMeter::setMinutesPurchased(int minutes) { minutesPurchased = minutes; }
