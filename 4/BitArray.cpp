#include "BitArray.h"

void Bit::operator=(bool toSet) {
	if (toSet) {
		*m_data |= 1 << n_pos;
	} else {
		*m_data &= ~(1 << n_pos);
	}
}

Bit::operator bool() const {
	return *m_data & (1 << n_pos);
}

BitArray::BitArray(unsigned int size): m_size(size) {
	m_size = size;
	if (size%8) {
		++m_size;
	}
	m_bits = new unsigned char[m_size];
	std::memset(m_bits, 0, m_size);
}

BitArray::BitArray(unsigned int size, bool setOnes = false) {
	m_size = size;
	m_bits = new unsigned char[(size / 8) + 1];
	for(unsigned int i = 0; i < (m_size / 8) + 1; i++) {
		if (setOnes) {
			 m_bits[i] = 0xFF;
		} else {
			m_bits[i] = 0x00;
		}
	}
}

BitArray::BitArray(const BitArray& o) {
	m_bits = new unsigned char[o.m_size/8 + 1];
	m_size = o.m_size;
	memcpy(m_bits, o.m_bits, (o.m_size/8 + 1));
}

void BitArray::operator=(const BitArray& o) {
	delete[] m_bits;
	m_bits = new unsigned char[o.m_size/8 + 1];
	m_size = o.m_size;
	memcpy(m_bits, o.m_bits, (o.m_size/8 + 1));
}

void BitArray::print() const {
    unsigned int current = m_size;
    for(unsigned int i = 0; i < m_size; i++) {
        bool bit = (*this)[m_size - i - 1];
        current--;
        std::cout << bit;
        if (current%8 == 0) {
            std::cout << " <-" << current << " ";
        }    
    }
}

const Bit BitArray::operator[](unsigned int npos) const {
        return Bit(m_bits + npos/8, npos % 8);
}

Bit BitArray::operator[](unsigned int npos) {
    return Bit(m_bits + npos/8, npos % 8);
}
