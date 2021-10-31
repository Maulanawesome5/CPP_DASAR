#include <iostream>
using namespace std;

// Fungsi dengan return
int luasKotak(int p, int l, int t){
    int luas = p * l * t;
    return luas;
}

// Fungsi tanpa return
void tampilkan(int x){
    cout << "Menggunakan void : ";
    cout << x << endl;
}

int main(int argc, char const *argv[])
{
    int p, l, t;
    int hasil;
    cout << "=== Program Luas Kotak ===" << endl;
    cout << "Masukkan nilai panjang : ";
    cin >> p;
    cout << "Masukkan nilai lebar : ";
    cin >> l;
    cout << "Masukkan nilai tinggi : ";
    cin >> t;
    
    // Display biasa
    cout << "Luas kotak = " << luasKotak(p, l, t) << endl;
    
    // Display menggunakan void
    hasil = luasKotak(p, l, t);
    tampilkan(hasil);


    return 0;
}
