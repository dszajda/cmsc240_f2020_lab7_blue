using namespace std;

#include "Triangle.h"
#include <iostream>

Triangle::Triangle() : Shape("Triangle"), base(0.0), height(0.0){
  cout << "In Triangle default constructor" << endl;
}

Triangle::Triangle(string name, double baseVal, double heightVal): Shape(name), base(baseVal), height(heightVal){
  cout << "In Triangle's typical-use constructor" << endl;
}

Triangle::~Triangle() {}

double Triangle::getArea(){
  return ((0.5)*base*height); 
}

void Triangle::print(){
  Shape::print();
  cout << "Base = " << this->base << endl;
  cout << "Height = " << this->height << endl;
  cout << "Area = " << getArea() << endl;
}
