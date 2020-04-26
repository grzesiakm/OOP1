//
// Created by mg on 21/04/2020.
//
#include "MyText.h"

void MyText::setText(std::string txt) {
    m_text = txt;
}

unsigned int MyText::getLength() const {
    return m_text.length();
}

std::string MyText::rawString() const {
    return m_text;
}