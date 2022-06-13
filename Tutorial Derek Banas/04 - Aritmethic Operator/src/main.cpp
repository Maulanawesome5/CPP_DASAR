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
    string q1 = "Enter a number : ";
    string num1, num2;
    
    cout << q1;
    cin >> num1;
    cout << "Enter another number : ";
    cin >> num2;

    // cara konversi string menjadi integer
    int newNum1 = stoi(num1); // method stoi -> string to integer
    int newNum2 = stoi(num2);
    printf("%d + %d = %d\n", newNum1, newNum2, (newNum1 + newNum2));
    printf("%d - %d = %d\n", newNum1, newNum2, (newNum1 - newNum2));
    printf("%d * %d = %d\n", newNum1, newNum2, (newNum1 * newNum2));
    printf("%d / %d = %d\n", newNum1, newNum2, (newNum1 / newNum2));
    printf("%d %% %d = %d\n", newNum1, newNum2, (newNum1 % newNum2));

    return 0;
}
