#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 5;
    float b = 6.67f;
    char c = 'd';

    // Integer ditambahkan dengan float yang di casting
    cout << a + (int)b << endl;

    /* 
        Char ditambah dengan tipe data numerik yang di casting
        Sehingga nilainya bergeser sebanyak 5
        dari d menjadi i 
    */
    cout << (char)(c + a) << endl;

    return 0;
}

/*
    Casting --> Mengubah / konversi suatu tipe data
    menjadi tipe data yang lain. 
*/