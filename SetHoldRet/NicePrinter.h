#pragma once
#include <iostream>
#include <iomanip>
#include <string>

class NicePrinter {
public:
    NicePrinter(int prefix) { m_prefix = prefix; }
    
    //template method that prints object and enumerates lines
    template <typename T> void operator()(const T& txt) const {
        std::cout << std::setw(m_prefix) << ++s_count << ": " << txt << std::endl;
    }
    
    //print method to separate block of codes
    void separator(int n) const {
        std::cout << "=====-===== " << n << " =====-=====" << std::endl;
    }
    
    //print method to display text with * decorators 
    void header(const std::string& txt) const {
        std::cout << "* " << txt << " *" << std::endl;
    }
    
private:
    //defines width space needed for enumeration
    int m_prefix;
    //defines number of line
    static int s_count;
};

int NicePrinter::s_count;