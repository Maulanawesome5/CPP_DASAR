#include <iostream>

using namespace std;

/* Prototype */
double luas_segitiga(double, double);
double luas_lingkaran(double);
void display(double);

int main(int argc, char const *argv[])
{
    double r, a, t;
    double hasil;
    cout << "Program Luas Segitiga" << endl;
    cout << "Masukan nilai alas   : ";
    cin >> a;
    cout << "Masukan nilai tinggi : ";
    cin >> t;

    hasil = luas_segitiga(a, t);
    display(hasil);

    cout << "Program Luas Lingkaran" << endl;
    cout << "Masukan nilai r (jari-jari) : ";
    cin >> r;
    
    hasil = luas_lingkaran(r);
    display(hasil);

    return 0;
}

/* Deklarasi fungsi */
double luas_segitiga(double alas, double tinggi){
    cout << "Luas Segitiga" << endl;
    return 1.2 * alas * tinggi;
}

double luas_lingkaran(double r){
    cout << "Luas Lingkaran" << endl;
    return 3.14 * r * r;
}

void display(double x){
    cout << x << endl;
}