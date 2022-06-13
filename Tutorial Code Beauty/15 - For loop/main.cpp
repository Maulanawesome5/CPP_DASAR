#include <iostream>

using namespace std;

int main()
{
    /*
     * For Loop
     * Membuat program menghitung faktorial.
     * Program ini tidak menggunakan rekursi, namun perlu
     * variabel tambahan bernama factorial untuk menggantikan
     * fungsi rekursif.
    */

    int number;
    cout << "Number: ";
    cin >> number;

    int factorial = 1;

    for(int i = 1; i <= number; i++){
        factorial *= i;
    }

    cout << number << "! = " << factorial;

    return 0;
}
