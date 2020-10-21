#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include <string>

class Rectangle : public Shape {
    private:
        double width;
        double height;
    public:
        Rectangle();
        Rectangle(std::string name, double width, double height);
        ~Rectangle();
        double getArea();
        void print;
};

#endif