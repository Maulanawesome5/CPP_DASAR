#include <iostream>
using namespace std;

int main(){

    // Variabel
    int a = 5;
    cout << "Address dari a = " << &a << endl;
    cout << "Nilai dari a = " << a << endl;
    
    int &b = a;
    cout << "Address dari b = " << &b << endl;
    cout << "Nilai dari b = " << b << endl;

    b = 10;
    cout << "Nilai dari a = " << a << endl;
    cout << "Nilai dari b = " << b << endl;
    
    cout << "Nilai dari a = " << a << endl;
    cout << "Nilai dari b = " << b << endl;
    
    cin.get();
    return 0;
}

