#ifndef ASD_MYPRINTABLE_H
#define ASD_MYPRINTABLE_H

#include <string>
#include <iostream>


class MyPrintable {
public:
    virtual ~MyPrintable() {}

    virtual std::string rawString() const = 0;

    virtual unsigned int getLength() const = 0;
};

#endif //ASD_MYPRINTABLE_H
