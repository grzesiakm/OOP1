//
// Created by mg on 21/04/2020.
//

#ifndef ASD_MYTEXT_H
#define ASD_MYTEXT_H
#include "AttFormat.h"
#include "AttColor.h"
#include "StringConvertable.h"

class MyText : public AttColor, public AttFormat, public StringConvertable {
public:
    MyText(const std::string a, AttFormat::Option o, AttColor::Option op) : m_text(a), AttFormat(o), AttColor(op) {}

    void setText(std::string txt);

    unsigned int getLength() const override;

    std::string rawString() const override;

private:
    std::string m_text;
};

#endif //ASD_MYTEXT_H
