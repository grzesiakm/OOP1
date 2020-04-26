//
// Created by mg on 21/04/2020.
//

#ifndef ASD_CONSOLEPRINTER_H
#define ASD_CONSOLEPRINTER_H

#include "StringConvertable.h"
#include "AttFormat.h"
#include "AttColor.h"

class ConsolePrinter
{
public:
    ConsolePrinter(unsigned int width);

    void print( const StringConvertable & obj ) const;

public:
    static const char * resetSeq();
    static const char * controlSeq( AttFormat::Option opt );
    static const char * controlSeq( AttColor::Option opt );

private:
    unsigned int m_width;
};

#endif //ASD_CONSOLEPRINTER_H
