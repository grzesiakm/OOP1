#include "Trojkat.h"

double Trojkat::polePow() const {
	double s = (m_a + m_b + m_c)/2;
	return sqrt(s*(s-m_a)*(s-m_b)*(s-m_c));
}

