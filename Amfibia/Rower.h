#pragma once
#include "Pojazdy.h"
#include "Amfibia.h"

class Rower : public PojazdLadowy {
public:
    Rower(const std::string& reg) : m_reg(reg) {}

private:
    std::string getInfo() const override {
        return "Rower <"+m_reg+">";
    }
    const std::string m_reg;
};