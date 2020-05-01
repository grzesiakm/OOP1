#ifndef ASD_ATTCOLOR_H
#define ASD_ATTCOLOR_H

class AttColor {
public:
    enum Attribute {
        BLACK,
        RED,
        GREEN,
        YELLOW,
        BLUE,
        MAGENTA,
        CYAN,
        GRAY,
        WHITE
    };

    AttColor(Attribute opt) : m_color(opt) {}

    void setColor(Attribute c) {
        m_color = c;
    }

    Attribute getColor() const {
        return m_color;
    }
protected:
    Attribute m_color;
};

#endif //ASD_ATTCOLOR_H
