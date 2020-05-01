#pragma once
#include "Fun.h"

class FZlozona : public Fun {
public:
    FZlozona() : m_f1(nullptr), m_f2(nullptr) {}

    FZlozona(const FZlozona& c) {
        m_f1 = c.m_f1->clone();
        m_f2 = c.m_f2->clone();
    }

    FZlozona(Fun* f1, Fun* f2) {
        m_f1 = f1->clone();
        m_f2 = f2->clone();
    }

    ~FZlozona() {
        delete(m_f1);
        delete(m_f2);
    }

    Fun* clone() const override {
        return new FZlozona(*this);
    }
    
    double wartosc(double x) const override {
        return (*m_f2)((*m_f1)(x));
    }

private:
    Fun* m_f1;
    Fun* m_f2;
};