#include <iostream>

using namespace std;

int main()
{
    /**
     * Copy ini -> g, G, h, H, '_', "_"
     *
     * Array
     * Tipe data yang bisa menyimpan banyak nilai,
     * namun terbatas pada jenis tipe data yang sama.
     * Misalkan ingin menampung banyak tipe data int pada array,
     * maka array tersebut harus di deklarasikan sebagai int.
    */

    float salaryPerMonth[6]; // = {100, 220, 300, 0, 200, 250}; // ini array
    float totalSalary = 0;
    float averageSalary;
    float inTwoYears;

    for(int i = 1; i <= 6; i++){
        cout << "How much your salary in month " << i << " ? ";
        cin >> salaryPerMonth[i];
        totalSalary += salaryPerMonth[i];
    }

    //totalSalary = salaryPerMonth[0] + salaryPerMonth[1] + salaryPerMonth[2] +
    //              salaryPerMonth[3] + salaryPerMonth[4] + salaryPerMonth[5];
    averageSalary = totalSalary / 6;
    inTwoYears = averageSalary * 24; // 2 years = 24 month

    cout << "\nTotal salary in 6 month $ " << totalSalary << endl;
    cout << "Average salary $ " << averageSalary << endl;
    cout << "In two years later, i will earn $ " << inTwoYears << endl;

    return 0;
}
