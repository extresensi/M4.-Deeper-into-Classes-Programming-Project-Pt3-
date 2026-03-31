// ParkingMeter.h
#ifndef PARKINGMETER_H
#define PARKINGMETER_H

class ParkingMeter {
private:
    int minutesPurchased;

public:
    ParkingMeter();
    explicit ParkingMeter(int minutesPurchased);

    int getMinutesPurchased() const;
    void setMinutesPurchased(int minutes);
};

#endif // PARKINGMETER_H
