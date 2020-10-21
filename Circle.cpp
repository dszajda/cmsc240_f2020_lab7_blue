#ifndef __Circle_CPP__
#define __TRIANGLE_CPP__
using namespace std;

#include "Shape.h"
#include <iostream>

Circle::Circle() : Shape(), radius(0.0) { 
	cout << "In Circle default constructor" << endl;
}


Circle::Circle(string name, double radVal): Shape(name), radius(radVal)
{
	cout << "In Circle typical-use constructor" << endl;
}		


Circle::~Circle() {}

double Circle::getArea() 
{ 
	double rSquared  = pow (radius, 2.0);
	double area = PI*rSquared;
	return this->area;
}

void Circle::print() 
{
	Shape::print();		//print name
	cout << "Radius = " << this->radius << endl;
	cout << "Area = " << this.getArea() << endl;	
}
