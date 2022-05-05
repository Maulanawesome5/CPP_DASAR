#include <iostream>

using namespace std;

/* Template
 * Adalah cara untuk membuat fungsi dengan nama yang sama
 * namun berbeda tipe data parameternya.
 * Template ada untuk menghindari overwrite fungsi yang sudah di deklarasi sebelumnya.
*/

/* Fungsi biasa, nama sama, parameter berbeda tipe data */
void print(int data){
    cout << "Data int -> " << data << endl;
}
void print(double data){
    cout << "Data double -> " << data << endl;
}

// Template fungsi
template<typename T>
void cetak(T data){
    cout << data << endl;
}

// Template dengan dua parameter
template<typename T, typename U>
T max(T data1, U data2){
    return (data1 > data2) ? data1 : data2;
}

int main(){
    print(5);
    print(3.14);

    // Dengan template, cukup membuat satu fungsi, maka tipe datanya akan berubah otomatis
    cetak(5);
    cetak(3.14);

    cout << max(10, 103.5) << endl;

    cetak<double>(10.15);
    cout << max<double,int>(11.1, 12) << endl;

    return 0;
}
