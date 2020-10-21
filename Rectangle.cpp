#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle() : Shape("Rectangle"), rectWidth{0.0}, rectHeight{0.0} {}

Rectangle::Rectangle(string name, double width, double height) : Shape(name), rectWidth(width), rectHeight(height) {}

Rectangle::~Rectangle() {}

double Rectangle::getArea() {
    return(rectWidth * rectHeight);
}

void Rectangle::print() {
    Shape::print();
    cout << "Width: " << rectWidth << endl;
    cout << "Height: " << rectHeight << endl;
    cout << "Area: " << getArea() << endl;
}
