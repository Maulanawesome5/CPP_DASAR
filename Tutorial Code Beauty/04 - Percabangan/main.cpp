#include <iostream>

using namespace std;

int main()
{
    /* Percabangan
     * If statement
     * Else statement
    */

    // user enters integer number
    // program write out if that number is even or odd
    int number;
    cout << "Please enter whole number: ";
    cin >> number;
    if(number % 2 == 0){
        cout << "You have entered even number" << endl;
    } else{
        cout << "You have entered odd number" << endl;
    }
    cout << "Thanks. Bye" << endl;

    return 0;
}
