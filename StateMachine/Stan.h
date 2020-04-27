#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "MaszynaStanow.h"

#define STATE_TYPE(system) class system : public Stan
using std::string;
using std::vector;

class MaszynaStanow;

class Stan {
public:
    Stan() = default;
    virtual ~Stan() = default;
    void set(MaszynaStanow *s) { ms = s; }
    virtual void operator ()() = 0;
    virtual const char* nazwa() const = 0;
    virtual void podsumowanie() const = 0;

protected:
    string m_nazwa;
    MaszynaStanow *ms;
};

STATE_TYPE(ZbieranieDanych) {
public:
    explicit ZbieranieDanych(string mail);
    virtual const char* nazwa() const;
    virtual void podsumowanie() const;
    virtual void operator()();

private:
    string adres;
};

STATE_TYPE(Podsumowanie) {
public:
    virtual void podsumowanie() const;
    virtual const char* nazwa() const;
    virtual void operator()();
};
