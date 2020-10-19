#include <string>
using namespace std; 

class Circle: public Shape
 {
        private:
		 double radius;
		 const long double PI = 3.141592653589793238L;
        public:
                Circle();
                Circle(string name, double radius);
                ~Circle();
		double getArea();
                void print;
};
