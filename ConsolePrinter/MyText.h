#ifndef ASD_MYTEXT_H
#define ASD_MYTEXT_H
#include <utility>

#include "AttFormat.h"
#include "AttColor.h"
#include "MyPrintable.h"

class MyText : public AttColor, public AttFormat, public MyPrintable {
public:
    MyText(std::string  a, AttFormat::Attribute o, AttColor::Attribute op) : AttFormat(o), AttColor(op), m_text(std::move(a)) {}

    void setText(std::string txt);

    unsigned int getLength() const override;

    std::string rawString() const override;

private:
    std::string m_text;
};

#endif //ASD_MYTEXT_H
