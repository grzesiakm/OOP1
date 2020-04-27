#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using std::vector;
using std::string;


class ListaString {
public:
    ListaString() { 
		if (loud) { std::cout << "(list-def-ctor)" << std::endl; }
	}
    ~ListaString() { 
		if (loud) { std::cout << "(list-dtor)" << std::endl; }
	}
    ListaString(const ListaString& cls) { 
		if (loud) { std::cout << "(list-copy-ctor)" << std ::endl; }
		m_systems = cls.m_systems;
	}
    ListaString(ListaString&& mls) { 
		if (loud) { std::cout << "(list-move-ctor)" << std ::endl; }
		m_systems.clear();
		for(unsigned int i = 0; i < mls.m_systems.size(); i++) {
            m_systems.push_back(std::move(mls.m_systems[i]));
        }
	}
    static void rob_halas(bool val) { loud = val; }
    friend ListaString& operator<<(ListaString &ls, string str);
    friend std::ostream& operator<<(std::ostream& o, const ListaString &ls);
    string operator[](unsigned int n) const { return m_systems[n]; }
	static bool loud;
                                                
private:
    vector<string> m_systems;
};

ListaString& operator<<(ListaString &ls, string str) {
    ls.m_systems.push_back(str);
        return ls;
}

std::ostream& operator<<(std::ostream& o, const ListaString &ls) {
    int i = 1;
    for(string n : ls.m_systems) {
    	o << i <<". " <<  n << std::endl;
        i++;
    }
    return o;
}

bool ListaString::loud = true;
