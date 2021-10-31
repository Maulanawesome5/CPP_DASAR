#include <iostream>
using namespace std;

//Membuat fungsi dengan kembalian (return)
int kuadrat(int x){
    // Fungsi yang berisi 1 parameter
    int y;
    y = x * x;
    return y;
}

int tambah(int a, int b){
    //Fungsi yang berisi 2 parameter
    int c;
    c = a + b;
    return c;
}

int main(int argc, char const *argv[])
{
    int x, hasil;
    int a, b;
    
    cout << "=== Menghitung Kuadrat ===" << std::endl;
    cout << "Masukan nilai untuk 'x' : ";
    cin >> x;

    hasil = kuadrat(x);
    cout << "Kuadrat dari " << x << " = ";
    cout << hasil << endl;

    cout << "=== Menghitung Tambah ===" << std::endl;
    cout << "Masukan nilai untuk 'a' : ";
    cin >> a;
    cout << "Masukan nilai untuk 'b' : ";
    cin >> b;

    hasil = tambah(a, b);
    cout << a << " + " << b << " = " << hasil << endl;

    return 0;
}
