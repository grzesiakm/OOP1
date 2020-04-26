#pragma once

#include <cstring>
#include <iostream>


//class simplifies operations on bits in the byte
class Bit {
public:
	Bit(unsigned char* data, unsigned int npos): m_data(data), n_pos(npos) {}
	void operator=(bool toSet); //set the bit as 1 or 0 
	operator bool() const; //get the value of the bit
private:
	unsigned char* m_data; //pointer to the byte
	unsigned int n_pos; //number of the bit in one byte to get access to
};

//class represents an array of bits
class BitArray {
public:
	BitArray(unsigned int size);
	BitArray(unsigned int size, bool setOnes); //bool value if BitArray should be filled with 1 (if not then fill with 0)
	BitArray(const BitArray& o);
	~BitArray() { delete [] m_bits; }
	void operator=(const BitArray& o); //copy one array of bits from another
	void print() const;
	const Bit operator[](unsigned int npos) const; //access given bit from an array
	Bit operator[] (unsigned int npos);
private:
	unsigned char* m_bits; //an array of bits
	unsigned int m_size; //number of bits inside the array
};
