// ParkingTicket.cpp
#include "ParkingTicket.h"
#include <iomanip>

ParkingTicket::ParkingTicket(const std::string &carMake_, const std::string &carModel_,
                             const std::string &carColor_, const std::string &license_,
                             int minutesParked_, int minutesPurchased_,
                             int fine_, const std::string &officerName_, const std::string &badgeNumber_)
    : carMake(carMake_), carModel(carModel_), carColor(carColor_), license(license_),
      minutesParked(minutesParked_), minutesPurchased(minutesPurchased_),
      fine(fine_), officerName(officerName_), badgeNumber(badgeNumber_) {}

int ParkingTicket::getFine() const { return fine; }

void ParkingTicket::print(std::ostream &os) const {
    os << "----- Parking Ticket -----\n";
    os << "Vehicle: " << carMake << " " << carModel << " (" << carColor << ")\n";
    os << "License: " << license << '\n';
    os << "Minutes Parked: " << minutesParked << '\n';
    os << "Minutes Purchased: " << minutesPurchased << '\n';
    os << "Fine: $" << fine << '\n';
    os << "Issuing Officer: " << officerName << " (Badge " << badgeNumber << ")\n";
    os << "--------------------------\n";
}
