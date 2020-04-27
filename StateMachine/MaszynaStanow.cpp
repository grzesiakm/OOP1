#include "MaszynaStanow.h"


MaszynaStanow::~MaszynaStanow() {
    for(unsigned int i = 0; i < m_list.size(); ++i) {
        delete m_list[i];
    }
}

MaszynaStanow& MaszynaStanow::operator+= (Stan* st) {
    st->set(this);
    m_list.push_back(st);
    return *this;
}

Stan& MaszynaStanow::operator()() {
    return *m_list[m_current];
}

void MaszynaStanow::start() {
    std::cout << "Rozpoczynamy dzialanie maszyny stanow!" << std::endl;
    m_current = 0;
}

void MaszynaStanow::operator++() {
    if(m_current < m_list.size() - 1)
        ++m_current;
}
void MaszynaStanow::operator--() {
    if(m_current > 0)
        --m_current;
}

void MaszynaStanow::print(std::ostream & o) const {
    for(unsigned int i = 0; i < m_list.size(); ++i) {
        if(i == m_current)
            std::cout << ">" << m_list[i]->nazwa() << "< ";
        else
            std::cout << m_list[i]->nazwa() << " ";
    }
}

void MaszynaStanow::podsumowanie() const {
    for(unsigned int i = 0; i < m_list.size(); ++i) {
        m_list[i]->podsumowanie();
    }
}
