#pragma once

// Багаж пасажира
class Baggage {
public:
    explicit Baggage(double weightKg);

    double getWeight() const;

private:
    double weightKg_;
};
