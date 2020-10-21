#ifndef __SHAPE_CPP__
#define __SHAPE_CPP__

#include <iostream>
#include "Shape.h"
using namespace std;

Shape::Shape(std::string shapeName) {
    name = shapeName;
}

Shape::~Shape() {}


double Shape::getArea(){
   return 0;
}

void Shape::print(){
   cout << "Shape: " << name << endl;
}

#endif
