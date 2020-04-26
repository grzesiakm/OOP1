//
// Created by mg on 21/04/2020.
//

#ifndef ASD_MYLINE_H
#define ASD_MYLINE_H
#include "AttColor.h"
#include "AttFormat.h"
#include "StringConvertable.h"

class MyLine : public AttColor, public StringConvertable {
public:
    MyLine(char ch, unsigned int l, AttColor::Option op) : m_char(ch), m_len(l), AttColor(op) {}

    std::string rawString() const override;

    void setLength(unsigned int len);

    void setChar(char c);

    unsigned int getLength() const override;

private:
    char m_char;
    unsigned int m_len;
};

#endif //ASD_MYLINE_H
