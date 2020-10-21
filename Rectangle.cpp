#include <iostream>

using namespace std;

Rectangle::Rectangle() : Shape(), width{0.0}, length{0.0} {}

Rectangle::Rectangle(string name, double width, double height) : Shape(name), width(widthVal), height(heightVal) {}

Rectangle::~Rectangle() {}

double Rectangle::getArea() {
    return(width * height);
}

void Rectangle::print() {
    Shape::print();
    cout << "Width: " << this->width << endl;
    cout << "Length: " << this->length << endl;
    cout << "Area: " << this.getArea << endl;
}
