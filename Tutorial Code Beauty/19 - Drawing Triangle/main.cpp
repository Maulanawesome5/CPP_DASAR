#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    /*
     * Menggambar segitiga di console
     * menggunakan looping dan standar library <iomanip>
     * untuk mengatur jarak antar pola.
     *
     * Mekanismenya menggunakan input dari user untuk
     * memasukkan panjang pola, dan bentuk pola / pattern.
    */

    int length;
    char pattern;

    cout << "Input length: ";
    cin >> length;
    cout << "Pattern symbol: ";
    cin >> pattern;

    cout << "\nTriangle" << endl;
    for(int i = 1; i <= length; i++){
        for(int j = 1; j <= i; j++){
            cout << setw(2) << pattern;
        }
        cout << endl;
    }

    cout << "\nInverted Triangle" << endl;
    for(int i = length; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << setw(2) << pattern;
        }
        cout << endl;
    }

    return 0;
}
