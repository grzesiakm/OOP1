#pragma once
#include <iostream>
#include <vector>
#include "Stan.h"

class Stan;

class MaszynaStanow {
public:
    MaszynaStanow() = default;
    ~MaszynaStanow();
    MaszynaStanow& operator+= (Stan* st);
    Stan& operator()();
    void start();
    void operator++();
    void operator--();
    void print(std::ostream& o) const;
    void podsumowanie() const;
                                        
private:
    std::vector<Stan*> m_list;
    unsigned int m_current;
};


inline std::ostream& operator<< (std::ostream& o, const MaszynaStanow& m) {
    m.print(o);
    return o;
}
