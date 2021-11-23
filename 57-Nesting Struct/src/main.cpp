#include <iostream>
#include <string>

using namespace std;

/* Struct adalah data yang dibentuk oleh beberapa data */
struct aktor{
    string nama;
    int tahun_lahir;
};


struct film{
    string judul;
    string genre;
    int tahun;
    /*Struct aktor*/
    aktor pemeran_1;
    aktor pemeran_2;
};


int main(int argc, char const *argv[])
{
    aktor aktor1, aktor2;
    // Buat aktor 1
    aktor1.nama = "Michael Otong";
    aktor1.tahun_lahir = 1992;
    // Buat aktor 2
    aktor2.nama = "Sandra Bulog";
    aktor2.tahun_lahir = 1995;

    cout << "Nama Bintang Film" << endl;
    cout << aktor1.nama << " lahir pada tahun ";
    cout << aktor1.tahun_lahir << endl;
    cout << aktor2.nama << " lahir pada tahun ";
    cout << aktor2.tahun_lahir << endl << endl;

    // Buat judul film
    film film1, film2;
    film1.judul = "Pengabdi Wakanda";
    film1.genre = "Horror Comedy";
    film1.tahun = 2018;
    film1.pemeran_1 = aktor1;
    film1.pemeran_2 = aktor2;
    cout << "Judul film : " << film1.judul << endl;
    cout << "Genre film : " << film1.genre << endl;
    cout << "Tahun rilis: " << film1.tahun << endl;
    cout << "Pemeran 1  - " << film1.pemeran_1.nama << endl;
    cout << "Pemeran 2  - " << film1.pemeran_2.nama << endl;
    cout << endl;

    film2.judul = "James Bon Cabe";
    film2.genre = "Action";
    film2.tahun = 2012;
    film2.pemeran_1 = aktor1;

    cout << "Judul film : " << film2.judul << endl;
    cout << "Genre film : " << film2.genre << endl;
    cout << "Tahun rilis: " << film2.tahun << endl;
    cout << "Pemeran 1  - " << film2.pemeran_1.nama << endl;
    cout << endl;

    return 0;
}
