#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    Shape figure("DefaultName");

    figure.print();
    cout << figure.getArea() << endl;

//----------------------------------------
// testing for Rectangle.{h,cpp}
//----------------------------------------    
    cout << endl;
    Rectangle r1;
    r1.print();
    
    cout << endl;
    Rectangle r2("Rectangle1", 5.0, 2.0);
    r2.print();
//----------------------------------------
}
