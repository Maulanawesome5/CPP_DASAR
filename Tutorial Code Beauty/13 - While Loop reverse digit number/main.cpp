#include <iostream>

using namespace std;

int main()
{
    /*
     * While Loop
     * Program untuk membalikkan (reverse) digit angka
    */

    int number, reversedNumber = 0;
    cout << "Number: ";
    cin >> number;

    while(number != 0){
        reversedNumber *= 10;
        int lastDigit = number % 10;
        reversedNumber += lastDigit;
        number /= 10;
    }
    cout << "Reversed: " << reversedNumber << endl;

    return 0;
}
