#include <iostream>

using namespace std;

int main()
{
    /*
     * Ternary Operator
     * Konsepnya seperti if else, namun dengan
     * notasi lebih singkat.
     * Studi kasus tebak angka antara 2 variabel
    */

    int hostUserNum, guestUserNum;
    cout << "Host: ";
    cin >> hostUserNum;
    system("cls");
    cout << "Guest: ";
    cin >> guestUserNum;

    /*if(hostUserNum == guestUserNum){
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect!" << endl;
    }*/

    /* Ternary Operator */
    // cek kondisi                   aksi benar          aksi salah
    (hostUserNum == guestUserNum) ? cout << "Correct!" : cout << "Incorrect!";

    return 0;
}
