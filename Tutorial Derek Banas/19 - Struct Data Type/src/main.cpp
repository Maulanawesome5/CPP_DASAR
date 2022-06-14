#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

using namespace std;

struct Shape {
    double lenght, width;
    Shape(double l = 1, double w = 1){
        lenght = l;
        width = w;
    }
    double Area(){
        return lenght * width;
    }
    private:
        int id;
};

struct Circle : Shape {
    /* Mewarisi atau inheritance dari Struct Shape */
    Circle(double width){
        this->width = width;
    }
    double Area(){
        return 3.14159 * pow((width / 2), 2);
    }
};


int main(int argc, char const *argv[])
{
    /**
     * @brief Struct data type
     * @author Maulana Aji Wicaksono
     * @attention Struct merupakan tipe data yang berjenis collection,
     * artinya di dalam struct bisa menampung tipe data lainnya. Mekanismenya
     * mirip seperti Class
    */

    Shape shapes(10, 10);
    cout << "Square area : " << shapes.Area() << endl;
    Circle circles(10);
    cout << "Circle area : " << circles.Area() << endl;
    Shape rectangle{10, 15};
    cout << "Rectangle area : " << rectangle.Area() << endl;


    return 0;
}

