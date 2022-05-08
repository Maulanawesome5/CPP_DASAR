#include <iostream>

using namespace std;

int main()
{
    /* Operator in C++
     * Arithmetic Operator (+ - * / %)
     * Unary Operator (++ --)
     * Relational Operator (<, >, <=, >=, ==, !=)
     * Logical Operator (&& || !)
     * Assignment Operator (=, +=, -=, *=, /=, %=)
    */

    // Arithmetic Operator
    cout << 5 + 2 << endl;
    cout << 5 / 2 << endl;
    cout << 15 % 5 << endl;
    cout << endl;

    // Unary Operator
    int a = 10;
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl;
    cout << endl;

    // Relational Operator
    int b = 5, c = 5;
    cout << (b != c) << endl; // false
    cout << (b == c) << endl; // true
    cout << (b <= c) << endl; // true
    cout << endl;

    // Logical Operator
    cout << (a==b && b==c) << endl;
    cout << (b==5 || c==5) << endl;
    cout << !(b==5 || c==5) << endl;
    cout << endl;

    // Assignment Operator
    int x = 15;
    cout << x << endl;
    x += 5;
    cout << x << endl;
    x *= 4;
    cout << x << endl;

    return 0;
}
