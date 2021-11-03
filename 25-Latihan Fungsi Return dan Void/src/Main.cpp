#include <iostream>
using namespace std;

// === Fungsi dengan return ===
double luas_persegi(double p, double l){
    cout << "Luas Persegi Panjang" << endl;
    double luas;
    luas = p * l;
    return luas;
}

// === Fungsi dengan return ===
double keliling_persegi(double p, double l){
    cout << "Keliling Persegi Panjang" << endl;
    double keliling;
    keliling = 2 * (p + l);
    return keliling;
}

// === Fungsi tanpa return ===
void display(double x){
    cout << x << endl;
}

int main(int argc, char const *argv[]){
    double panjang, lebar;
    double hasil;

    cout << "Masukkan nilai panjang : ";
    cin >> panjang;
    cout << "Masukkan nilai lebar   : ";
    cin >> lebar;
    
    /*
        cout << luas_persegi(panjang, lebar) << endl;
        cout << keliling_persegi(panjang, lebar) << endl;
    */
    hasil = luas_persegi(panjang, lebar);
    display(hasil);
    hasil = keliling_persegi(panjang, lebar);
    display(hasil);
    
    return 0;
}
