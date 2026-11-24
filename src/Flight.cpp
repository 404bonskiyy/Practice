#include "Flight.h"

std::string toString(FlightStatus status) {
    switch (status) {
        case FlightStatus::Scheduled: return "За розкладом";
        case FlightStatus::Delayed:   return "Затриманий";
        case FlightStatus::Boarding:  return "Посадка";
        case FlightStatus::Closed:    return "Посадку завершено";
    }
    return "Невідомо";
}

Flight::Flight(const std::string& number,
               const std::string& destination,
               const std::string& departureTime,
               int maxSeats,
               double maxBaggageKg)
    : number_(number),
      destination_(destination),
      departureTime_(departureTime),
      maxSeats_(maxSeats),
      maxBaggageKg_(maxBaggageKg),
      status_(FlightStatus::Scheduled) {}

const std::string& Flight::getNumber() const { return number_; }
const std::string& Flight::getDestination() const { return destination_; }
const std::string& Flight::getDepartureTime() const { return departureTime_; }
int Flight::getMaxSeats() const { return maxSeats_; }
double Flight::getMaxBaggageKg() const { return maxBaggageKg_; }
FlightStatus Flight::getStatus() const { return status_; }

void Flight::setStatus(FlightStatus status) { status_ = status; }
