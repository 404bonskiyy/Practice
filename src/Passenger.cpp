#include "Passenger.h"

Passenger::Passenger(int id, const std::string& fullName, const std::string& passportNo)
    : id_(id), fullName_(fullName), passportNo_(passportNo) {}

int Passenger::getId() const { return id_; }
const std::string& Passenger::getFullName() const { return fullName_; }
const std::string& Passenger::getPassportNo() const { return passportNo_; }
