#pragma once
#include "Ksztalt.h"
#include <cmath>

class Trojkat: public Ksztalt {
public:
	~Trojkat() {}
	Trojkat(double a, double b, double c): m_a(a), m_b(b), m_c(c) {}
	void wypisz(std::ostream& out) const override {
		out << "Trojkat o bokach " << m_a << " " << m_b << " " << m_c << std::endl; }
	double polePow() const override;
private:
	double m_a;
	double m_b;
	double m_c;
};

