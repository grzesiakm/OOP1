#pragma once
#include <cmath>
#include "Fun.h"

class Liniowa : public Fun {
public:
    Liniowa() : m_a(0), m_b(0) {}

    Liniowa(const Liniowa& c) : m_a(c.m_a), m_b(c.m_b) {}

    static Liniowa* utworz() {
        return new Liniowa();
    }

    Fun* clone() const override {
        return new Liniowa(*this);
    }
    double wartosc(double x) const override {
        return m_a * x + m_b;
    }

    Liniowa* a(double v) {
        m_a = v;
        return this;
    }
    
    Liniowa* b(double v) {
        m_b = v;
        return this;
    }
        
private:
    double m_a;
    double m_b;
};

class Sinus : public Fun {
public:
    Sinus(){}

    Sinus(const Sinus& c) {}

    static Sinus* utworz() {
        return new Sinus();
    }

    Fun* clone() const override {
        return new Sinus(*this);
    }

    double wartosc(double x) const override {
        return sin(x);
    }

};

class Kwadratowa : public Fun {
public:
    Kwadratowa() : m_a(0), m_b(0), m_c(0) {}

    Kwadratowa(const Kwadratowa& c) : m_a(c.m_a), m_b(c.m_b), m_c(c.m_c) {}

    static Kwadratowa* utworz() {
        return new Kwadratowa();
    }
    double wartosc(double x) const override {
        return m_a * x * x + m_b * x + m_c;
    }
    
    Fun* clone() const override {
        return new Kwadratowa(*this);
    }
    Kwadratowa* a(double v) {
        m_a = v;
        return this;
    }
    
    Kwadratowa* b(double v) {
        m_b = v;
        return this;
    }
    
    Kwadratowa* c(double v) {
        m_c = v;
        return this;
    }

private:
    double m_a;
    double m_b;
    double m_c;
};