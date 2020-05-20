#pragma once
#include <iostream>
#include <string>

//class to count it's instances using static value
class LicznikPoziomow {
public:

    LicznikPoziomow() {
        LicznikPoziomow::lvl++;
        std::cout<<"Rozpoczynamy poziom numer " << LicznikPoziomow::lvl << "." << std::endl;
    }
    
    ~LicznikPoziomow() {
        std::cout<<"Konczymy poziom numer " << LicznikPoziomow::lvl << "." << std::endl;
        LicznikPoziomow::lvl--;
    }
    
    //current lvl of the depth that error is in, which equals to current number of this class instances
    static int lvl; 
};
