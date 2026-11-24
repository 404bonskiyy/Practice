#pragma once
#include <string>

// Місце в літаку: ряд + літера (наприклад, 12A)
class Seat {
public:
    Seat(int row, char letter);

    int getRow() const;
    char getLetter() const;
    bool isOccupied() const;

    void occupy();
    void release();

    std::string label() const;

private:
    int row_;
    char letter_;
    bool occupied_;
};
