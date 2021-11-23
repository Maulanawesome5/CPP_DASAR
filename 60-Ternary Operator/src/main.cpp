#include <iostream>
#include <string>

using namespace std;
/*
    Ternary Operator --> ?
    kondisi ? hasil1 : hasil2
*/
int main(int argc, char const *argv[])
{
    int a, b;
    string hasil1, hasil2, output;

    hasil1 = "otong";
    hasil2 = "ucup";

    a = 5;
    cout << "masukkan angka: ";
    cin >> b;

    /*
        Jika menggunakan if else untuk percabangan
    if (a < b){
        output = hasil1;
    }else{
        output = hasil2;
    }
    */

    /*
        Menggunakan ternary operator untuk membuat percabangan
    */
    output = (a < b) ? hasil1 : hasil2; // Ternary operator
    
    cout << output << endl;
    
    return 0;
}
