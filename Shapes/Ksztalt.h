#pragma once
#include <iostream>

class Ksztalt {
public:
	virtual ~Ksztalt() {}
	static void wypisz(const Ksztalt& o) {
		o.wypisz(std::cout); }
	virtual void wypisz(std::ostream& out) const {}
	virtual double polePow() const { return 0; }
};
