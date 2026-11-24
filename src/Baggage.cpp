#include "Baggage.h"

Baggage::Baggage(double weightKg) : weightKg_(weightKg) {}

double Baggage::getWeight() const { return weightKg_; }
