#include <iostream>
#include <array>
using namespace std;

int main(){
    // Syntax standart array built-in
    // array<int, jumlah array> nama array

    array <int, 5> nilai;
    for(int i=0; i<=4; i++){
        nilai[i] = 1;
        cout << "nilai [" << i << "] = " << nilai[i];
        cout << " address : " << &nilai[i] << endl;
    }

    // Ukuran array
    cout << "Ukuran : " << nilai.size() << endl;
    // Address awal dari array
    cout << "Address awal : " << nilai.begin() << endl;
    // Address akhir dari array
    cout << "Address akhir : " << nilai.end() << endl;


    return 0;
}

// Kesimpulan :