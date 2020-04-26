//
// Created by mg on 21/04/2020.
//

#ifndef ASD_STRINGCONVERTABLE_H
#define ASD_STRINGCONVERTABLE_H

#include <string>
#include <iostream>


class StringConvertable {
public:
    virtual std::string rawString() const = 0;

    virtual unsigned int getLength() const = 0;
};

#endif //ASD_STRINGCONVERTABLE_H
