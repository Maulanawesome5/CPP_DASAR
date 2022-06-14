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
    /**
     * @brief Math Method
     * @author Maulana Aji Wicaksono
     * @attention Membahas math method, yaitu method atau function
     * untuk perhitungan matematika yang berasal dari library <cmath>
     * pada bahasa pemrograman C++
    */

    cout << "abs(-10) = " << abs(-10) << endl;
    cout << "max(5,4) = " << max(5, 4) << endl;
    cout << "min(5,4) = " << min(5, 4) << endl;
    cout << "fmax(5.3, 4.3) = " << fmax(5.3, 4.3) << endl;
    cout << "fmin(5.3, 4.3) = " << fmin(5.3, 4.3) << endl;
    cout << "ceil(10.45) = " << ceil(10.45) << endl;
    cout << "floor(10.45) = " << floor(10.45) << endl;
    cout << "round(10.45) = " << round(10.45) << endl;
    cout << "pow(2,3) = " << pow(2, 3) << endl;
    cout << "sqrt(100) = " << sqrt(100) << endl;
    cout << "cbrt(1000) = " << cbrt(1000) << endl << endl;

    cout << "exp(1) = " << exp(1) << endl; // e ^ x
    cout << "exp2(1) = " << exp2(1) << endl; // 2 ^ x
    cout << "log(20.079) = " << log(20.079) << endl; // e * e * e ~= 20 so log(20.079) ~= 3
    cout << "log2(8) = " << log2(8) << endl; // 2 * 2 * 2 = 8
    cout << "hypot(2,3) = " << hypot(2,3) << endl; // Hypotenuse : SQRT(A^2 + B^2)


    return 0;
}
