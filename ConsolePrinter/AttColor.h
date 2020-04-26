//
// Created by mg on 21/04/2020.
//

#ifndef ASD_ATTCOLOR_H
#define ASD_ATTCOLOR_H

class AttColor {
public:
    enum Option {
        BLACK = 0,
        RED = 1,
        GREEN = 2,
        YELLOW = 3,
        BLUE = 4,
        MAGENTA = 5,
        CYAN = 6,
        GRAY = 7,
        WHITE = 8
    };

    AttColor(Option opt) : m_color(opt) {}

    void setColor(AttColor::Option c) {
        m_color = c;
    }

    AttColor::Option getColor() const {
        return m_color;
    }
protected:
    AttColor::Option m_color;
};

#endif //ASD_ATTCOLOR_H
