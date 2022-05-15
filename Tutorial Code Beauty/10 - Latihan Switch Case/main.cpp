#include <iostream>

using namespace std;

int main()
{
    /*
     * Latihan percabangan Switch Case
     * untuk memeriksa berapa jumlah hari dalam setiap bulannya.
     * Rumusnya
     * (year % 4 == 0 && year % 100 != 0 || year % 400 == 0
    */

    int year, month;
    cout << "Year, month: ";
    cin >> year >> month;

    switch(month){
        case 2:
            (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ?
             cout << "29 days month." : cout << "28 days month.";
             break;
        case 4: // Case boleh dikosongi begini, sehingga aksi yang dilakukan
        case 6: // adalah aksi yang dibawahnya.
        case 9:
        case 11:
            cout << "30 days month." << endl;
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "31 days month." << endl;
            break;
        default:
            cout << "Not valid !" << endl;
    }

    return 0;
}
