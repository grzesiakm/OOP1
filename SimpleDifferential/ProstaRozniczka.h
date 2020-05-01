#pragma once
#include "Fun.h"

class ProstaRozniczka {
public:
    ProstaRozniczka(double v) : m_h(v), m_f(nullptr) {}

    double w(double x) const {
        return (m_f->wartosc(x + m_h) - m_f->wartosc(x - m_h)) / (2 * m_h);
    }

    ProstaRozniczka* z(Fun* f) {
        m_f = f;
        return this;
    }

    double operator()(double x) const {
        return w(x);
    }

    const ProstaRozniczka& operator()(Fun* f) {
        m_f = f;
        return *this;
    }

private:
    double m_h;
    Fun* m_f;
};