// PoliceOfficer.cpp
#include "PoliceOfficer.h"
#include <optional>
#include <cmath>

PoliceOfficer::PoliceOfficer() : name("Officer Unknown"), badgeNumber("0000") {}
PoliceOfficer::PoliceOfficer(const std::string &name_, const std::string &badgeNumber_)
    : name(name_), badgeNumber(badgeNumber_) {}

std::string PoliceOfficer::getName() const { return name; }
std::string PoliceOfficer::getBadgeNumber() const { return badgeNumber; }

int PoliceOfficer::computeFine(int minutesOver) {
    if (minutesOver <= 0) return 0;
    // First hour or part of hour = $25
    // Each additional hour or part = $10
    int hours = (minutesOver + 59) / 60; // round up partial hours
    if (hours <= 1) return 25;
    return 25 + (hours - 1) * 10;
}

// g++ -std=c++17 -Wall -Wextra -o app PoliceOfficer.cpp OtherFiles.cpp
// # or
// clang++ -std=c++17 -stdlib=libc++ -o app ...
