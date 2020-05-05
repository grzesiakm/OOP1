#pragma once
#include <iostream>

class PredkoscMaksymalna {
public:
    PredkoscMaksymalna(float max) : m_Max(max) {}

    ~PredkoscMaksymalna() = default;

    float getValue() const { return m_Max; }

protected:
    float m_Max;
};

std::ostream &operator<<(std::ostream& o, const PredkoscMaksymalna& m) {
    return o << m.getValue() << " km/h";
}