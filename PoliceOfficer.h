// PoliceOfficer.h
#ifndef POLICEOFFICER_H
#define POLICEOFFICER_H

#include <string>
#include <optional>            // <-- add this
#include "ParkingTicket.h"
#include "ParkedCar.h"
#include "ParkingMeter.h"

class PoliceOfficer {
private:
    std::string name;
    std::string badgeNumber;

    static int computeFine(int minutesOver);

public:
    PoliceOfficer();
    PoliceOfficer(const std::string &name, const std::string &badgeNumber);

    std::string getName() const;
    std::string getBadgeNumber() const;

    // Inspect a car and meter; return a ParkingTicket pointer if violation exists (nullptr means no violation)
    ParkingTicket* inspect(const ParkedCar &car, const ParkingMeter &meter) const;
};

#endif // POLICEOFFICER_H
