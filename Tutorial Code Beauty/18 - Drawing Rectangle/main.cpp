#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    /*
     * Menggambar kotak di console
     * dengan looping.
     * Mekanismenya adalah dengan input panjang dan lebar
     * kemudian memilih bentuk pola dengan input symbol.
     *
     * Perlu Library bernama <iomanip>
     * untuk mengatur kerapian output pattern kotak.
     * Didalam <iomanip> terdapat function bernama setw()
    */

    int height, width;
    char pattern;

    cout << "Height : ";
    cin >> height;
    cout << "Width : ";
    cin >> width;
    cout << "Pattern symbol : ";
    cin >> pattern;
    cout << endl;

    for(int h = 0; h < height; h++){
        for(int w = 0; w < width; w++){
            cout << setw(3) << pattern;
        }
        cout << endl;
    }

    return 0;
}
