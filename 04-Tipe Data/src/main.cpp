#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a; // Integer adalah tipe data angka bilangan bulat
    a = 5;
    cout << "Ukuran data " << a << " = " << sizeof(a) << " byte" << endl;
    cout << "Ukuran max integer = " << numeric_limits<int>::max() << endl;
    cout << "Ukuran min integer = " << numeric_limits<int>::min() << endl;
    cout << endl;
    long b; // Long adalah tipe data angka dengan max nilai lebih besar
    b = 6;
    cout << "Ukuran data " << b << " = " << sizeof(b) << " byte" << endl;
    cout << "Ukuran max long = " << numeric_limits<long>::max() << endl;
    cout << "Ukuran min long = " << numeric_limits<long>::min() << endl;
    cout << endl;
    short c; // Short adalah tipe data angka dengan max nilai lebih kecil
    c = 7;
    cout << "Ukuran data " << c << " = " << sizeof(c) << " byte" << endl;
    cout << "Ukuran max short = " << numeric_limits<short>::max() << endl;
    cout << "Ukuran min short = " << numeric_limits<short>::min() << endl;
    cout << endl;
    float d; // Float adalah tipe data angka desimal
    d = 12.5;
    cout << "Ukuran data " << d << " = " << sizeof(d) << " byte" << endl;
    cout << "Ukuran max float = " << numeric_limits<float>::max() << endl;
    cout << "Ukuran min float = " << numeric_limits<float>::min() << endl;
    cout << endl;
    double e; // Double adalah tipe data angka desimal
    e = 3.14;
    cout << "Ukuran data " << e << " = " << sizeof(e) << " byte" << endl;
    cout << "Ukuran max double = " << numeric_limits<double>::max() << endl;
    cout << "Ukuran min double = " << numeric_limits<double>::min() << endl;
    cout << endl;
    char f; // Char adalah tipe data karakter huruf
    f = 'A';
    cout << "Ukuran data " << f << " = " << sizeof(f) << " byte" << endl;
    cout << "Ukuran max char = " << "Tidak punya" << endl; //Char tidak memiliki min/max
    cout << "Ukuran min char = " << "Tidak punya" << endl; //Karena hanya berupa huruf
    cout << endl;
    bool g; // Boolean adalah tipe data biner (true/false)
    g = true;
    cout << "Ukuran data " << g << " = " << sizeof(g) << " byte" << endl;
    cout << "Ukuran max bool = " << numeric_limits<bool>::max() << endl;
    cout << "Ukuran min bool = " << numeric_limits<bool>::min() << endl;
    

    return 0;
}
