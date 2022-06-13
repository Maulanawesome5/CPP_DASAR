#include <iostream>

using namespace std;

int main()
{
    /*
     * Nesting loop / perulangan bersarang.
     * Menggabungkan for loop dengan do while.
     * Membuat program peringkat 1, 2, 3
     * Max nilai yang dimasukkan ke setiap peringkat adalah sampai 5
    */

    int grade;
    int sum = 0;

    for(int i = 0; i < 3; i++){
        do{
            cout << "Enter grade " << i + 1;
            cout << ": ";
            cin >> grade;
        }while(grade < 1 || grade > 5);
        sum += grade;
    }
    cout << "Sum = " << sum << endl;
    cout << "Avg grade = " << (float)sum / 3 << endl;

    return 0;
}
