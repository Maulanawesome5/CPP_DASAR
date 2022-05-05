#include <iostream>

using namespace std;

int main()
{
    /*
     * Tipe Data
     * Jenis data yang disimpan didalam variabel. Tipe data memiliki nilai, ukuran alokasi, min/max nilai
     * Tipe data angka = short, integer, long, float, double
     * Tipe data huruf = char, string
     * Tipe data biner = boolean
    */

    int a = 10;
    cout << "Var a = " << a << ", alokasi memori sebesar " << sizeof(a) << " byte" << endl;
    cout << "Nilai minimal int = " << INT_MIN << endl;
    cout << "Nilai maximal int = " << INT_MAX << endl << endl;

    short b = 96;
    cout << "Var b = " << b << ", alokasi memori sebesar " << sizeof(b) << " byte" << endl;
    cout << "Nilai minimal short = " << SHRT_MIN << endl;
    cout << "Nilai maximal short = " << SHRT_MAX << endl << endl;

    long c = 200;
    cout << "Var c = " << c << ", alokasi memori sebesar " << sizeof(c) << " byte" << endl;
    cout << "Nilai minimal long = " << LONG_MIN << endl;
    cout << "Nilai maximal long = " << LONG_MAX << endl << endl;

    float d = 3.14;
    cout << "Var d = " << d << ", alokasi memori sebesar " << sizeof(d) << " byte" << endl;
    cout << "Nilai minimal float = " << "" << endl;
    cout << "Nilai maximal float = " << "" << endl << endl;

    double e = 22.7;
    cout << "Var e = " << e << ", alokasi memori sebesar " << sizeof(e) << " byte" << endl;
    cout << "Nilai minimal double = " << "" << endl;
    cout << "Nilai maximal double = " << "" << endl << endl;

    char f = '?';
    cout << "Var f = " << f << ", alokasi memori sebesar " << sizeof(f) << " byte" << endl;
    cout << "Nilai minimal char = " << CHAR_MIN << endl;
    cout << "Nilai maximal char = " << CHAR_MAX << endl << endl;

    bool g = true;
    cout << "Var g = " << g << ", alokasi memori sebesar " << sizeof(g) << " byte" << endl;
    cout << "Nilai minimal bool = " << "" << endl;
    cout << "Nilai maximal bool = " << "" << endl << endl;

    return 0;
}
