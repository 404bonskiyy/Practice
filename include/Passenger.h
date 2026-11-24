#pragma once
#include <string>

// Пасажир рейсу
class Passenger {
public:
    Passenger(int id, const std::string& fullName, const std::string& passportNo);

    int getId() const;
    const std::string& getFullName() const;
    const std::string& getPassportNo() const;

private:
    int id_;
    std::string fullName_;
    std::string passportNo_;
};
