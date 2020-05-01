#ifndef ASD_ATTFORMAT_H
#define ASD_ATTFORMAT_H

class AttFormat {
public:
    enum Attribute {
        BOLD,
        DIM,
        UNDERLINED,
        RESET
    };

    AttFormat(Attribute opt) : m_format(opt) {}

    void setFormat(Attribute f) {
        m_format = f;
    }

    Attribute getFormat() const {
        return m_format;
    }

private:
    Attribute m_format;
};

#endif //ASD_ATTFORMAT_H
