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

double AddNumbers(double num1, double num2);
// void AssignAge(int age);
void AssignAge(int* ptrAge);

int main(int argc, char const *argv[])
{
    /**
     * @brief Function
     * @author Maulana Aji Wicaksono
     * @attention cara membuat function sendiri
    */

    printf("%.1f + %.1f = %.1f", 5.0, 4.0, AddNumbers(5,4));

    int age43 = 43;
    AssignAge(&age43);
    cout << "\nMy Age = " << age43 << endl;


    return 0;
}

double AddNumbers(double num1 = 0, double num2 = 0){
    return num1 + num2;
}

// void AssignAge(int age){
//     age = 24;
// }

void AssignAge(int* ptrAge){
    *ptrAge = 24;
}
