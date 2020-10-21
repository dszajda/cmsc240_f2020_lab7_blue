using namespace std;
#include "Circle.h"
#include "Shape.h"
#include <iostream>
#include <cmath>
using namespace std;

Circle::Circle() : Shape("Circle"), radius{0.0} { 
	cout << "In Circle default constructor" << endl;
}


Circle::Circle(string name, double radVal): Shape(name), radius(radVal)
{
	cout << "In Circle typical-use constructor" << endl;
}		


Circle::~Circle() {}

double Circle::getArea() 
{ 
	double rSquared  = pow(radius, 2.0);
	return(PI*rSquared);
}

void Circle::print() 
{
	Shape::print();		//print name
	cout << "Radius = " << this->radius << endl;
	cout << "Area = " << getArea() << endl;	
}
