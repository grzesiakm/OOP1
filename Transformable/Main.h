//
// Created by mg on 22/04/2020.
//

#ifndef ALINA2204WIELOKROTNE_MAIN_H
#define ALINA2204WIELOKROTNE_MAIN_H
#include <iostream>
#include <math.h>
#include <cmath>

class Drawable {
public:
    Drawable() {}
    virtual void draw() const = 0;
};

void draw(const Drawable* d) {
    d->draw();
}
class Transformable {
public:
    Transformable() {}
    virtual void shift(double a, double b) = 0;
};

class ClosedShape {
public:
    ClosedShape() {}
    virtual double area() const = 0;
};

class Point {
public:
    Point(double a, double b) : m_a(a), m_b(b){}
    Point() {}
    friend std::ostream& operator<< (std::ostream& o, const Point& p);
    void change(double s1, double s2){
        m_a += s1;
        m_b += s2;
    }
    double getA() const { return m_a; }
    double getB() const { return m_b; }

private:
    double m_a;
    double m_b;
};

inline std::ostream& operator<< (std::ostream& o, const Point& p)
{
    return o << "(" << p.m_a << ", " << p.m_b << ")";
}

class Line : public Drawable, public Transformable {
public:
    Line(const Point& a, const Point& b) : m_A(a), m_B(b) {}
    void draw() const override {
        std::cout<<"++ Rysuje linie od " << m_A << " do " << m_B << std::endl;
    }
    void shift(double a, double b) override {
        m_A.change(a, b);
        m_B.change(a, b);
    }
private:
    Point m_A;
    Point m_B;
};

class Rectangle : public Drawable, public Transformable, public ClosedShape {
public:
    Rectangle(const Point &a, const Point &b) : m_r1(a), m_r2(b){}
    void draw() const override {
        std::cout<<"++ Rysuje prostokat o rogach w " << m_r1 << " i " << m_r2 << std::endl;
    }
    void shift(double a, double b) override {
        m_r1.change(a, b);
        m_r2.change(a, b);
    }
    double area() const override {
        double resA = m_r2.getA() - m_r1.getA();
        double resB = m_r2.getB() - m_r1.getB();
        double res = abs(resA) * abs(resB);
        return res;
    }
private:
    Point m_r1;
    Point m_r2;
};

class Circle : public Drawable, public Transformable, public ClosedShape {
public:
    Circle(const Point &p, unsigned int r) : m_s(p), m_r(r){}
    void draw() const override {
        std::cout<<"++ Rysuje kolo o srodku " << m_s << " i promieniu " << m_r << std::endl;
    }
    void shift(double a, double b) override {
        m_s.change(a, b);
    }
    double area() const override {
        return M_PI*m_r*m_r;
    }
private:
    Point m_s;
    unsigned int m_r;
};

#endif //ALINA2204WIELOKROTNE_MAIN_H
