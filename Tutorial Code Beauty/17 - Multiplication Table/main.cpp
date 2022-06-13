#include <iostream>

using namespace std;

int main()
{
    /*
     * Nesting Loop
     * Membuat program tabel perkalian menggunakan
     * looping bersarang.
    */

    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            cout << i << " x " << j << " = ";
            cout << i * j << endl;
        }
        cout << endl;
    }

    return 0;
}
