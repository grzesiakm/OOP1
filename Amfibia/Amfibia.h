#pragma once
#include "Samochod.h"
#include "Motorowka.h"

class Amfibia : public Samochod, public Motorowka {
public:
    Amfibia(const std::string& reg, PredkoscMaksymalna m1, PredkoscMaksymalna m2) : Samochod(reg, m1), Motorowka(reg, m2), m_reg(reg) {}

    const PredkoscMaksymalna& predkoscMaksymalna_Lad() const {
        return m_maxA;
    }

    const PredkoscMaksymalna& predkoscMaksymalna_Woda() const {
        return m_maxM;
    }

private:
    std::string getInfo() const override {
        return "Amfibia <"+m_reg+">";
    }
    const std::string m_reg;
};