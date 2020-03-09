#pragma once
#include "Ksztalt.h"

class Kolo: public Ksztalt {
public:
	~Kolo() {}
	Kolo(double radius): m_rad(radius) {}
	void wypisz(std::ostream& out) const override {
		out << "Kolo o promieniu " << m_rad << std::endl; }
	double polePow() const override {
		return 3.1415 * (m_rad * m_rad); }
private:
	double m_rad;
};
