#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>
#include <fstream>

using namespace std;

double MultiplyByTwo(double num){
    // defined function as an variable
    return num * 2;
}

double DoMatematika(function<double(double)> func, double num){
    // passing function into function
    return func(num);
}

double MultiplyByThree(double num){
    // defined function as an variable
    return num * 3;
}

int main(int argc, char const *argv[])
{
    /**
     * @brief Function as an Object
     * @author Maulana Aji Wicaksono
     * @attention Menjadikan function sebagai variabel
     * @warning my keyboard error. copy paste -> g, h, '_', "_"
    */

    auto times2 = MultiplyByTwo;
    cout << "5 * 2 = " << times2(5) << endl;

    // ERROR JANCOOOOOOKKKK.. TUTORIAL SESAT
    cout << "6 * 2 = " << DoMatematika(times2,6) << endl;

    vector<function<double(double)>> funcs(2);
    funcs[0] = MultiplyByTwo;
    funcs[1] = MultiplyByThree;
    cout << "2 * 10 = " << funcs[0](10) << endl;

    return 0;
}
