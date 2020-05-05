#pragma once
#include "Pojazdy.h"

class Samochod : public PojazdLadowy {
public:
    Samochod(const std::string& reg, PredkoscMaksymalna m) : m_maxA(m), m_reg(reg) {}

    const PredkoscMaksymalna& predkoscMaksymalna() const {
        return m_maxA;
    }

protected:
    std::string getInfo() const override {
        return "Samochod <"+m_reg+">";
    }
    PredkoscMaksymalna m_maxA;
    const std::string m_reg;
};