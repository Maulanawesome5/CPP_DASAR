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

class Box{
    public:
        double lenght, width, breadth;
        string boxString;

        Box(){
            // constructor with default value
            lenght = 1, width = 1, breadth = 1;
        }

        Box(double l, double w, double b){
            lenght = l, width = w, breadth = b;
        }

        Box& operator ++ (){
            lenght++;
            width++;
            breadth++;
            return *this;
        }

        operator const char*(){
            ostringstream boxStream;
            boxStream << "Box : " << lenght << ", ";
            boxStream << width << ", " << breadth;
            boxString = boxStream.str();

            return boxString.c_str();
        }

        Box operator + (const Box& box2){
            Box boxSum;
            boxSum.lenght = lenght + box2.lenght;
            boxSum.width = width + box2.width;
            boxSum.breadth = breadth + box2.breadth;
            return boxSum;
        }

        bool operator == (const Box& box2){
            return (
                (lenght == box2.lenght) &&
                (width == box2.width) &&
                (breadth == box2.breadth)
            );
        }
};

int main(int argc, char const *argv[])
{
    /**
     * @brief Operate rowlrowlwloooerww
     * @author Maulana Aji Wicaksono
     * @attention Entahlah, spelling orangnya gak jelas..!
    */

    Box box1(10, 10, 10);
    ++box1;
    cout << box1 << endl;

    Box box2(5, 5, 5);
    cout << box2 << endl;
    cout << "box1 + box2 = " << box1 + box2 << endl;
    cout << "(box1 == box2) = " << (box1 == box2) << endl;


    return 0;
}
