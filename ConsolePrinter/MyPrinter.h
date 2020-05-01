#ifndef ASD_MYPRINTER_H
#define ASD_MYPRINTER_H

#include "MyPrintable.h"
#include "AttFormat.h"
#include "AttColor.h"

class MyPrinter
{
public:
    MyPrinter(unsigned int width);

    void print( const MyPrintable & obj ) const;

public:
    static const char * resetSeq();
    static const char * controlSeq( AttFormat::Attribute opt );
    static const char * controlSeq( AttColor::Attribute opt );

private:
    unsigned int m_width;
};

#endif //ASD_MYPRINTER_H
