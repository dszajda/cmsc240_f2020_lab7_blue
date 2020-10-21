#ifndef __SHAPE_H__
#define __SHAPE_H__

#include <string>
using namespace std;

class Triangle: public Shape
{
    private:
      double baseVal;
      double heightVal;

    public:
      Triangle();
      Triangle(string name, double base, double height);
      ~Triangle();
      double getArea();
      void print();
};

#endif
