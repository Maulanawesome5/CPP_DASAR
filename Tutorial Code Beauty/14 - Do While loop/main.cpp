#include <iostream>

using namespace std;

int main()
{
    /*
     * Do While looping
     * Menerapkan do while untuk program cek PIN rahasia
    */

    int userPin = 1234; // PIN rahasia
    int pin;
    int errorCounter = 0; // Jumlah kesalahan memasukkan PIN

    do{
        cout << "Enter your PIN: ";
        cin >> pin;

        if(pin != userPin){
            cout << "PIN invalid, please try again.\n\n";
            errorCounter++;
        }
    } while (errorCounter < 3 && pin != userPin);

    if(errorCounter < 3){
        // kondisi jika user benar memasukkan PIN
        cout << "Succsess. Loading.." << endl;
    } else {
        cout << "Failed. Blocked..!" << endl;
    }

    return 0;
}
