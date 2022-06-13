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
     * Conditional Operators 
     * >, <, >=, <=, ==, !=
     * 
     * Logical Operators
     * &&, ||, !
    */

    string sAge; // variabel Age in string
    cout << "Enter your age : ";
    cin >> sAge;
    int nAge = stoi(sAge); // convert input Age into integer

    if ((nAge >= 1) && (nAge <= 18)) {
        cout << "Important Birthday" << endl;
    } else if ((nAge == 21) || (nAge == 50)) {
        cout << "Important Birthday" << endl;
    } else if (nAge >= 65) {
        cout << "Important Birthday" << endl;
    } else {
        cout << "Not an Important Birthday" << endl;
    }


    return 0;
}
