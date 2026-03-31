// ParkedCar.cpp
#include "ParkedCar.h"

ParkedCar::ParkedCar()
    : make("Unknown"), model("Unknown"), color("Unknown"), license(""), minutesParked(0) {}

ParkedCar::ParkedCar(const std::string &make_, const std::string &model_,
                     const std::string &color_, const std::string &license_,
                     int minutesParked_)
    : make(make_), model(model_), color(color_), license(license_), minutesParked(minutesParked_) {}

std::string ParkedCar::getMake() const { return make; }
std::string ParkedCar::getModel() const { return model; }
std::string ParkedCar::getColor() const { return color; }
std::string ParkedCar::getLicense() const { return license; }
int ParkedCar::getMinutesParked() const { return minutesParked; }

void ParkedCar::setMinutesParked(int minutes) { minutesParked = minutes; }
