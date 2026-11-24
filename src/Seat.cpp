#include "Seat.h"

Seat::Seat(int row, char letter)
    : row_(row), letter_(letter), occupied_(false) {}

int Seat::getRow() const { return row_; }
char Seat::getLetter() const { return letter_; }
bool Seat::isOccupied() const { return occupied_; }

void Seat::occupy() { occupied_ = true; }
void Seat::release() { occupied_ = false; }

std::string Seat::label() const {
    return std::to_string(row_) + letter_;
}
