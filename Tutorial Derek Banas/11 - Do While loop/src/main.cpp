#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

using namespace std;

int imGlobal = 0;
const double PI = 3.14;

int main(int argc, char const *argv[])
{
    /**
     * @brief Do While loop for Guessing Random Number
     * @author Maulana Aji Wicaksono
     * @attention Tutorial ini untuk menunjukkan
     * implementasi do while untuk pembuatan program menebak angka.
     * Penggunaan library <ctime> diperlukan.
    */

    srand(time(NULL));
    int secretNum = rand() % 11;
    int guess = 0;

    do{
        cout << "Guess the number : ";
        cin >> guess;
        if(guess > secretNum) cout << "To Big\n";
        if(guess < secretNum) cout << "To Small\n";
    }while(secretNum != guess);

    cout << "You Guessed it..!" << endl;


    return 0;
}
