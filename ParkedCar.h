// ParkedCar.h
#ifndef PARKEDCAR_H
#define PARKEDCAR_H

#include <string>

class ParkedCar {
private:
    std::string make;
    std::string model;
    std::string color;
    std::string license;
    int minutesParked; // minutes parked

public:
    ParkedCar();
    ParkedCar(const std::string &make, const std::string &model,
              const std::string &color, const std::string &license,
              int minutesParked);

    // Accessors
    std::string getMake() const;
    std::string getModel() const;
    std::string getColor() const;
    std::string getLicense() const;
    int getMinutesParked() const;

    // Mutators
    void setMinutesParked(int minutes);
};

#endif // PARKEDCAR_H
