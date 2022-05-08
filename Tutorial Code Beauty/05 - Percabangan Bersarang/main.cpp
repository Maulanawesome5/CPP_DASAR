#include <iostream>

using namespace std;

int main()
{
    // User enters side length of a triangle (a, b, c)
    // Program should write out whether that triangle is
    // equilateral, isosceles, or scalene
    float a, b, c;
    cout << "a, b, c : ";
    cin >> a >> b >> c;

    if(a==b && b==c){
        cout << "Equilateral triangle" << endl;
    } else {
        if(a!=b && a!=c && b!=c){
            cout << "Scalene triangle" << endl;
        } else {
            cout << "Isosceles triangle" << endl;
        }
    }

    return 0;
}
