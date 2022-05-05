#include <iostream>
#include <string>

using namespace std;

/* implementasi auto */
template<typename T, typename U>
auto maks(T a, U b){
    return (a > b) ? a : b;
}

int main(){
    /* AUTO
     * Untuk mendeteksi jenis tipe data berdasarkan nilai yang dimasukkan
    */
    int a = 15;
    string b = "setring";
    float c = 14.5f;
    char d = 'E';

    cout << a << ", data type: " << typeid(a).name() << endl;
    cout << b << ", data type: " << typeid(b).name() << endl;
    cout << c << ", data type: " << typeid(c).name() << endl;
    cout << d << ", data type: " << typeid(d).name() << endl;

    /* implementasi auto */
    auto e = maks(a, d); // Var d berisi tipe data char, akan otomatis di casting menjadi integer
    cout << e << ", data type: " << typeid(e).name() << endl;


    return 0;
}
