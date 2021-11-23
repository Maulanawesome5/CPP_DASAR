#include <iostream>
#include <string>

using namespace std;
/*
    Comma Operator --> ,
    (ekpresi1, ekspresi2)
*/

void displayData(int nilai){
    cout << nilai << endl;
}

int main(int argc, char const *argv[])
{
    int a;
    int b;
    int c;

    // a = (b = 4, c = 6, (b+c)); // Bentuk comma operator
    // a = (b = 4, cout << b << endl, c = 6, cout << c << endl, (b+c)); // Bentuk comma operator dengan cout
    a = (b = 4, displayData(b), c = 6, displayData(c), (b+c)); // Bentuk comma operator dengan function
    
    cout << a << endl;
    
    return 0;
}
