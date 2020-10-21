#include <iostream>
#include "Shape.h"

using namespace std;

int main() {
    Shape figure("Shape Name");

    figure.print();
    cout << figure.getArea() << endl;

    //Triangle t;
    Triangle t = new Triangle("Triangle 1", 4, 4 );
    t.print();
    cout << "Area: " << t.getArea() << endl;

    Triangle t2 = new Triangle("Triangle 2", 0, 0);
    t2.print();
    cout << "Area: " << t2.getArea() << endl;
}
