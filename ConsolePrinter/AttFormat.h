//
// Created by mg on 21/04/2020.
//

#ifndef ASD_ATTFORMAT_H
#define ASD_ATTFORMAT_H

class AttFormat {
public:
    enum Option {
        BOLD = 0,
        DIM = 1,
        UNDERLINED = 2,
        RESET = 3
    };

    AttFormat(Option opt) : m_format(opt) {}

    void setFormat(AttFormat::Option f) {
        m_format = f;
    }

    AttFormat::Option getFormat() const {
        return m_format;
    }

private:
    AttFormat::Option m_format;
};

#endif //ASD_ATTFORMAT_H
