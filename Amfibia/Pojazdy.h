#pragma once
#include <string>
#include "Predkosc.h"

class Pojazd {
public:
    Pojazd() = default;
    virtual ~Pojazd() = default;
    virtual std::string getInfo() const = 0;
};

std::ostream& operator<<(std::ostream& o, const Pojazd& p) {
    return o << p.getInfo();
}


class PojazdLadowy : public virtual Pojazd {
public:
    std::string getInfo() const {
        return " ";
    }
};

