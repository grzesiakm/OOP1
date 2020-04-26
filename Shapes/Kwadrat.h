#pragma once
#include "Ksztalt.h"

class Kwadrat: public Ksztalt {
public:
	~Kwadrat() {}
	Kwadrat(double a): m_a(a) {}
	void wypisz(std::ostream& out) const override {
		out << "Kwadrat o boku " << m_a << std::endl; }
	double polePow() const override {
		return m_a * m_a; }
private:
	double m_a;
};
