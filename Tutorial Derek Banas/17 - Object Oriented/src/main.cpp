#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

#include "Shape.h"
#include "Circle.h"

using namespace std;

void ShowArea(Shape& shape);

int main(int argc, char const *argv[])
{
    /**
     * @brief Object Oriented Programming
     * @author Maulana Aji Wicaksono
     * @attention Object Oriented Programming merupakan paradigma dalam
     * pemrograman, dimana program dan function/method diperlakukan sebagai object.
    */

    Shape square(10, 5);
    Circle circle(10);
    ShowArea(square);
    ShowArea(circle);


    return 0;
}

void ShowArea(Shape& shape){
    cout << "Area : " << shape.Area() << endl;
}
