#include <iostream>

using namespace std;

int main()
{
    /*
     * Latihan While Loop
     * Program untuk menghitung berapa digit angka
    */

    int number;
    cout << "Masukkan angka: ";
    cin >> number;

    if(number == 0){
        // untuk mengantisipasi jika user memasukkan angka 0
        cout << "You have entered 0." << endl;
    }
    else{
        if(number < 0){
            // Blok kode ini untuk user jika memasukkan angka negatif
            number = -1 * number;
        }
        int counter = 0;
        while(number > 0){
            // angka yang dimasukkan akan dibagi 10
            // sehingga digit terakhir akan habis dibagi
            number /= 10;
            counter++;
        }
        cout << "Number contains " << counter << " digits" << endl;
    }

    return 0;
}
