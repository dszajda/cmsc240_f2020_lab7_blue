#include <iostream>
using namespace std;
#include "Shape.h"

Circle::Circle() : Shape(), radius(0.0) 	//default constructor
{
	//TODO: not sure if radius should be 0 by default? or null?
}

Circle::Circle(string name, double radVal): Shape(string name), radius(radVal)
{
	 //TODO: make sure you don't actually need anything in here
}		


Circle::~Circle() {}

double Circle::getArea() 
{ 
	double rSquared = pow (radius, 2.0);
	return this->PI*rSquared; 
}

void Circle::print() 
{
	Shape::print();		//print name
	cout << "radius = " << this->radius
	<< "area = " << this.getArea() << endl;	
}

