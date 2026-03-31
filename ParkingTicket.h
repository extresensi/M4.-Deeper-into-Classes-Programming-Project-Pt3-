// ParkingTicket.h
#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H

#include <string>
#include <iostream>

class ParkingTicket {
private:
    std::string carMake;
    std::string carModel;
    std::string carColor;
    std::string license;
    int minutesParked;
    int minutesPurchased;
    int fine; // in dollars
    std::string officerName;
    std::string badgeNumber;

public:
    ParkingTicket() = default;
    ParkingTicket(const std::string &carMake, const std::string &carModel,
                  const std::string &carColor, const std::string &license,
                  int minutesParked, int minutesPurchased,
                  int fine, const std::string &officerName, const std::string &badgeNumber);

    int getFine() const;
    void print(std::ostream &os) const;
};

#endif // PARKINGTICKET_H
