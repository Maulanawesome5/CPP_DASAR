#include <iostream>
using namespace std;


int main(){
    // Membuat array
    int nilai[5];
    nilai[0] = 0;
    nilai[1] = 1;
    nilai[2] = 2;
    nilai[3] = 3;
    nilai[4] = 4;
    cout << &nilai[0] << " Nilainya adalah : " << nilai[0] << endl;
    cout << &nilai[1] << " Nilainya adalah : " << nilai[1] << endl;
    cout << &nilai[2] << " Nilainya adalah : " << nilai[2] << endl;
    cout << &nilai[3] << " Nilainya adalah : " << nilai[3] << endl;
    cout << &nilai[4] << " Nilainya adalah : " << nilai[4] << endl;
    
    int *ptr = nilai;
    *(ptr + 2) = 6;
    cout << "\n";
    cout << &nilai[0] << " Nilainya adalah : " << nilai[0] << endl;
    cout << &nilai[1] << " Nilainya adalah : " << nilai[1] << endl;
    cout << &nilai[2] << " Nilainya adalah : " << nilai[2] << endl;
    cout << &nilai[3] << " Nilainya adalah : " << nilai[3] << endl;
    cout << &nilai[4] << " Nilainya adalah : " << nilai[4] << endl;

    cout << "\n";
    cout << "Ukuran Array : " << sizeof(nilai) << " byte" << endl;
    cout << "Jumlah member Array : " << sizeof(nilai)/sizeof(int) << endl;

    return 0;
}

// Kesimpulan :