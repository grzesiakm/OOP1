#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <exception>

//static int value of levels
int LicznikPoziomow::lvl = 0;

//this class shows the number of line and file name where the error occured, as well as reason to throw exception
class Calc_error : public std::runtime_error {
public:
    Calc_error(std::runtime_error *eo, std::string str, std::string f_name, int line_n) 
        : std::runtime_error(str + ", [plik = " + f_name + ", linia = " + std::to_string(line_n) + "]"), next(eo) {}
        
    ~Calc_error() = default;
    
    //method to handle all of the exceptions    
    static void handler() {
        try {
            throw;
        } catch(std::runtime_error* e) {
            std::cout<<" Zlapano wyjatek:"<<std::endl;
            while(e) {
                std::cout<<" -- z powodu: "<< e->what() <<std::endl;
                auto ex = dynamic_cast<Calc_error*>(e);
                if(!ex) {
                    delete e;
                    e = nullptr;
                }
                else {
                    e = ex->next;
                    delete ex;
                }
            }
        }
    }
    
    friend class LicznikPoziomow;
    
protected:
    //pointer to the next error
    std::runtime_error *next;
};
