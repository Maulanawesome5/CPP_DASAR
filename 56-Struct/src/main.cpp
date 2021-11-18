#include <iostream>
#include <string>

using namespace std;
/*
    Struct adalah data yang dibentuk oleh beberapa data
*/
struct buah{
    string warna;
    float berat;
    int harga;
    string rasa;
};


int main(int argc, char const *argv[])
{
    buah apel;
    apel.warna = "merah";
    apel.berat = 250.50f;
    apel.harga = 15000;
    apel.rasa = "manis kesat";

    cout << apel.warna << endl;
    cout << apel.berat << endl;
    cout << apel.harga << endl;
    cout << apel.rasa << endl << endl;
    
    buah jeruk;
    jeruk.warna = "orange";
    jeruk.berat = 150.0f;
    jeruk.harga = 19000;
    jeruk.rasa = "asam manis";

    cout << jeruk.warna << endl;
    cout << jeruk.berat << endl;
    cout << jeruk.harga << endl;
    cout << jeruk.rasa << endl << endl;

    cout << "Ukuran data struct Buah : " << sizeof(buah) << " byte" << endl;
    return 0;
}

