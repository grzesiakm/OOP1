//
// Created by mg on 21/04/2020.
//

#include "MyLine.h"

std::string MyLine::rawString() const {
    return std::string(m_len, m_char);
}

void MyLine::setLength(unsigned int len) {
    m_len = len;
}

void MyLine::setChar(char c) {
    m_char = c;
}

unsigned int MyLine::getLength() const {
    return m_len;
}