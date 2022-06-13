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

int imGlobal = 0;
const double PI = 3.14;

int main(int argc, char const *argv[])
{
    bool married = true;
    char myGrade = 'A';
    float f1 = 1.1111111; // 7 digit dibelakang koma
    float f2 = 1.1111111;
    double d1 = 1.1111111111111111; // 16 digit dibelakang koma
    double d2 = 1.1111111111111111;

    printf("Sum = %.7f\n", (f1 + f2));
    printf("Sum = %.16f\n", (d1 + d2));

    cout << "Min float " << numeric_limits<float>::min() << endl;
    cout << "Max float " << numeric_limits<float>::max() << endl;
    cout << "Min double " << numeric_limits<double>::min() << endl;
    cout << "Max double " << numeric_limits<double>::max() << endl;
    cout << "Min long double " << numeric_limits<long double>::min() << endl;
    cout << "Max long double " << numeric_limits<long double>::max() << endl;

    return 0;
}
