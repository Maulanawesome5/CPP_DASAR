#include <iostream>
using namespace std;

int main(){

    int a = 4;
    int *aPtr = nullptr; // Syntax pointer
    aPtr = &a;
    
    // int a mempunyai nilai dan address (alamat memori)
    cout << "Nilai dari a: " << a << endl;
    cout << "Address variabel a: " << &a << endl;

    // int a mempunyai nilai dan address (alamat memori)
    a = 10;
    cout << "Mengambil nilai dari pointer aPtr: " << *aPtr << endl;
    
    cin.get();
    return 0;
}

