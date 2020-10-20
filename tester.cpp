#include <iostream>
#include "Shape.h"

using namespace std;

int main() {
    Shape figure("Shape Name");

    figure.print();
    cout << figure.getArea() << endl;
}
