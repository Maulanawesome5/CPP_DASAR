#include <iostream>
using namespace std;

// Bisa menggunakan prototype
void fungsi(int *);
void kuadrat(int *);

int main(){

    // Variabel
    int a = 5;
    cout << "Address dari a = " << &a << endl;
    cout << "Nilai dari a = " << a << endl;
    fungsi(&a); //fungsi dengan input pointer

    kuadrat(&a);
    cout << "Nilai a = " << a << endl;
    
    cin.get();
    return 0;
}

void fungsi(int *b){
    cout << "Address dari b = " << b << endl;
    cout << "Nilai dari b = " << *b << endl; //differencing
}

void kuadrat(int *valPtr){
    *valPtr = (*valPtr) * (*valPtr);
}
// Kesimpulan :
// Latihan ini berguna untuk manajemen memory, jadi variabel a dan b
// berada pada address memory yang sama.
