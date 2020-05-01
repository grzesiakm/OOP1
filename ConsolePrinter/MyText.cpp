#include "MyText.h"
#include <utility>

void MyText::setText(std::string txt) {
    m_text = std::move(txt);
}

unsigned int MyText::getLength() const {
    return m_text.length();
}

std::string MyText::rawString() const {
    return m_text;
}