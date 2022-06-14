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

int main(int argc, char const *argv[])
{
    /**
     * @brief Exception Handling
     * @author Maulana Aji Wicaksono
     * @attention cara untuk mengatasi error di dalam program
     * keyword yang biasa dipakai untuk exception adalah : try, throw, catch
    */

    double num3 = 10, num4 = 0;

    try{
        if(num4 == 0){
            throw "Division by Zero Error";
        } else {
            printf("%.1f / %.1f = %.1f", num3, num4, (num3 / num4));
        }
    }
    catch(const char* exp){
        cout << "Error : " << exp << endl;
    }


    return 0;
}

