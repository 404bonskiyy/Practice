#pragma once
#include <string>

// Статус рейсу
enum class FlightStatus {
    Scheduled,  // за розкладом
    Delayed,    // затриманий
    Boarding,   // триває посадка
    Closed      // посадку завершено
};

std::string toString(FlightStatus status);

// Рейс: основні характеристики та обмеження
class Flight {
public:
    Flight(const std::string& number,
           const std::string& destination,
           const std::string& departureTime,
           int maxSeats,
           double maxBaggageKg);

    const std::string& getNumber() const;
    const std::string& getDestination() const;
    const std::string& getDepartureTime() const;
    int getMaxSeats() const;
    double getMaxBaggageKg() const;
    FlightStatus getStatus() const;

    void setStatus(FlightStatus status);

private:
    std::string number_;
    std::string destination_;
    std::string departureTime_;
    int maxSeats_;
    double maxBaggageKg_;
    FlightStatus status_;
};
