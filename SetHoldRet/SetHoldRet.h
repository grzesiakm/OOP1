#pragma once
#include <iostream>

class SetHoldRet {
public:
    SetHoldRet() = default;
    
    //initialising template method for a new instance of class T type
    template <typename T> void base (const T& object) {
        decide(true, object);
    }
    
    //template method that returns saved object by base method
    template <typename T> const T& product() const {
        return decide(false, T());
    }
    
    //template helper method to decide if we need to return or save first privided object
    template <typename T> const T& decide(bool toSave, const T& obj) const {
        static T tmp;
        if(toSave) {
            tmp = obj;
        }
        return tmp;
    }
};
