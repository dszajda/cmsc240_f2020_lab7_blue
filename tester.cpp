#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"

using namespace std;

int main() {

    //Testing Triangle
        cout << "========== Testing Triangle ===========" >> endl;
        Triangle t1 = new Triangle("Triangle 1", 4, 4 );   //testing constructor
        t1.print();

        cout << endl;
        Triangle t2;        //testing default constructor
        t2.print();
     

	cout << "======== testing shape =========="   
	Shape figure("DefaultName");
	figure.print();	
   	cout << figure.getArea() << endl;

//test circle
	cout << "======== testing circle  =========="
	Circle c1;		//default constructor
	Circle c2("circleTwo" , 0.02);	//constructor
	Circle c3("circleThree" , 240.2); //constructor
	
	//test print for all circles (simultaneously assess for successful
		// construction and successful getArea(). 
	cout << "first circle (default constructor)" << endl;
	c1.print(); 
	cout << "...Expected[null, null]" << endl;
	
	cout << "second circle (constructor)" << endl;
	c2.print();
	cout << "...Expected[circleTwo; radius = 0.02, radius = .01256]" << endl;

	cout << "third circle (constructor)" << endl;
        c3.print();
	cout << "...Expectedd[circleThree; radius = 240.2,  radius = 181165.5656]"
		 << endl;

//test Triangle

//test Rectangle
	cout << "======== testing circle  =========="
	cout << endl;
	Rectangle r1;
	r1.print();

	cout << endl;
	Rectangle r2("Rectangle1", 5.0, 2.0);
	r2.print();


}
