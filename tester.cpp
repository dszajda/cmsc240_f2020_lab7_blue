#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"

using namespace std;

/*
void printArea(Shape &fig) {
	cout << fig.getArea() << endl;
}
*/

int main() {

        cout << "-------- testing shape --------" << endl;
        Shape figure("DefaultName");
        figure.print();
        cout << figure.getArea() << endl;

//Testing Triangle
        cout << "-------- Testing Triangle --------" << endl;
        Triangle t1("Triangle 1", 4, 4 );   //testing constructor
        t1.print();

        cout << endl;
        Triangle t2;        //testing default constructor
        t2.print();
     
//test circle
	cout << "-------- testing circle --------" << endl;
	Circle c1;		//default constructor
	Circle c2("circleTwo" , 0.02);	//constructor
	Circle c3("circleThree" , 240.2); //constructor
	
	//test print for all circles (simultaneously assess for successful
		// construction and successful getArea(). 
	cout << "first circle (default constructor):" << endl;
	c1.print(); 
	cout << "...Expected[Circle, 0, 0]" << endl;
	
	cout << "second circle (constructor)" << endl;
	c2.print();
	cout << "...Expected[circleTwo; radius = 0.02, radius = .01256]" << endl;

	cout << "third circle (constructor)" << endl;
	c3.print();
	cout << "...Expectedd[circleThree; radius = 240.2,  radius = 181165.5656]"
		 << endl;

//test Rectangle
        cout << "-------- testing rectangle --------=" << endl;
        cout << endl;
        cout << "Testing Rectangle Default Constructor: " << endl;
        Rectangle r1;
        r1.print();
        cout << "[Shape: Rectangle]" << endl;
        cout << "[Width: 0]" << endl;
        cout << "[Height: 0]" << endl;
        cout << "[Area: 0]" << endl;

        cout << endl;
        cout << "Testing Constructor: " << endl;
        Rectangle r2("Rectangle2", 5.0, 2.0);
        r2.print();
        cout << "[Shape: Rectangle2]" << endl;
        cout << "[Width: 5]" << endl;
        cout << "[Height: 2]" << endl;
        cout << "[Area: 10]" << endl;

	// printArea(r1);
}


