// main.cpp
#include <iostream>
#include <vector>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"

int main() {
    std::cout << "Parking Ticket Simulator\n\n";

    // Create an officer (aggregation: officer inspects externally created cars/meters)
    PoliceOfficer officer("Jamie Carter", "A1234");

    // Scenario 1: Legal parking
    std::cout << "Scenario 1: Legal Parking\n";
    ParkedCar car1("Toyota", "Corolla", "Blue", "XYZ-100", 60);
    ParkingMeter meter1(60);
    auto t1 = officer.inspect(car1, meter1);
    if (t1) {
        t1->print(std::cout);
    } else {
        std::cout << "No ticket issued. Parking is legal.\n";
    }
    std::cout << '\n';

    // Scenario 2: Illegal parking under one hour over
    std::cout << "Scenario 2: Illegal Parking (under one hour over)\n";
    ParkedCar car2("Honda", "Civic", "Red", "ABC-200", 75); // 15 minutes over
    ParkingMeter meter2(60);
    auto t2 = officer.inspect(car2, meter2);
    if (t2) t2->print(std::cout);
    std::cout << '\n';

    // Scenario 3: Illegal parking multiple hours over
    std::cout << "Scenario 3: Illegal Parking (multiple hours over)\n";
    ParkedCar car3("Ford", "F-150", "White", "TRK-300", 250); // 250 parked, assume 60 purchased -> 190 over -> 4 hours (ceil)
    ParkingMeter meter3(60);
    auto t3 = officer.inspect(car3, meter3);
    if (t3) t3->print(std::cout);
    std::cout << '\n';

    // Scenario 4: Multiple cars
    std::cout << "Scenario 4: Multiple Cars\n";
    std::vector<ParkedCar> cars = {
        ParkedCar("Nissan", "Altima", "Gray", "NIS-1", 30),
        ParkedCar("BMW", "X3", "Black", "BMW-7", 130),
        ParkedCar("Tesla", "Model 3", "White", "TSL-9", 200)
    };
    std::vector<ParkingMeter> meters = {
        ParkingMeter(30),
        ParkingMeter(60),
        ParkingMeter(120)
    };
    for (size_t i = 0; i < cars.size(); ++i) {
        std::cout << "Inspecting car " << (i + 1) << ":\n";
        auto ticket = officer.inspect(cars[i], meters[i]);
        if (ticket) ticket->print(std::cout);
        else std::cout << "No ticket issued.\n";
        std::cout << '\n';
    }

    std::cout << "Simulation complete.\n";
    return 0;
}
