using namespace std;

#include "Triangle.h"
#include <iostream>

Triangle::Triangle() : Shape(), base(0.0), height(0.0){
  cout << "In Triangle default constructor" << endl;
}

Triangle::Triangle(string name, double base, double height): Shape(name), base(baseVal), height(heightVal){
  cout << "In Triangle's typical-use constructor" << endl;
}

Triangle::~Triangle() {}

double Triangle::getArea(){
  double value = (.5)*base*height;
  return this->value;
}

void Triangle::print(){
  Shape::print();
  cout << "Base = " << this->base << endl;
  cout << "Height = " << this->height << endl;
  cout << "Area = " << this.getArea() << endl;
}
