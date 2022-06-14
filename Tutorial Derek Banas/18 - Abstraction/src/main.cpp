#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

// #include "Shape.h"
// #include "Circle.h"
using namespace std;

// class abstraction
class Shape {
    public:
        virtual double Area() = 0;
};

class Circle : public Shape {
    protected:
        double width;

    public:
        Circle(double w){
            width = w;
        }

        double Area() override {
            return 3.14159 * pow((width / 2), 2);
        }
};

void ShowArea(Shape& shape);

int main(int argc, char const *argv[])
{
    /**
     * @brief Class Abstraction
     * @author Maulana Aji Wicaksono
     * @attention merupakan metode dalam OOP, yaitu membuat abstraksi / prototype dari
     * suatu class object. Berguna jika kita masih belum yakin dengan struktur isi class,
     * maka abstraction ini akan sangat membantu sebagai purwarupa program.
    */

    Circle circle(10);
    ShowArea(circle);


    return 0;
}

void ShowArea(Shape& shape){
    cout << "Area : " << shape.Area() << endl;
}
