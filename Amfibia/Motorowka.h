#pragma once
#include "Pojazdy.h"

class Motorowka : public virtual Pojazd {
public:
    Motorowka(const std::string& reg, PredkoscMaksymalna max) : m_maxM(max), m_reg(reg) {}

    const PredkoscMaksymalna& predkoscMaksymalna() const {
        return m_maxM;
    }

protected:
    std::string getInfo() const override {
        return "Motorowka <"+m_reg+">";
    }
    PredkoscMaksymalna m_maxM;
    const std::string m_reg;
};
