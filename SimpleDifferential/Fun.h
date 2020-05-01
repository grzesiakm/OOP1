#pragma once
#include <iostream>

class Fun {
public:
    virtual ~Fun() = default;

    virtual double wartosc(double x) const = 0;

    virtual Fun* clone() const = 0;

    virtual double operator()(double x) const { return wartosc(x); }

};