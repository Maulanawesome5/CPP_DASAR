#include <iostream>

using namespace std;

int main()
{
    /*
     * Variable : Wadah untuk menampung data/nilai yang akan disimpan dalam memory
     * Data Type : Jenis data yang ditampung oleh variable
     * Overflow
     * Size of data type
    */

    float annualSalary;
    cout << "Please enter your annual salary $ ";
    cin >> annualSalary;

    float monthlySalary = annualSalary / 12;
    cout << "Your monthly salary is " << monthlySalary << endl;
    cout << "In 10 years you will earn $ " << annualSalary * 10 << endl << endl;

    /* Aturan penulisan variabel
     * 1. Tidak boleh ada spasi -> nama variabel
     * 2. Tidak boleh diawali angka -> 123variabel
     * 3. Boleh pakai underscore -> nama_variabel
     * 4. Boleh pakai gaya camelcase -> namaIbuKandung
    */

    /* Data type size and min/max value
     * char  ->   1 byte ->          -127...127
     * uchar ->   1 byte ->             0...255
     * int   ->   4 byte ->   -2147483648...2147483647
     * uint  ->   4 byte ->             0...4294967295
     * short ->   2 byte ->        -32768...32767
     * ushort->   1 byte ->             0...65535
     * long  ->   4 byte ->   -2147483648...2147483647
     * ulong ->   4 byte ->             0...4294967295
     * float ->   4 byte ->
     * double->   8 byte ->
    */
    int yearOfBirth = 1999;
    char gender = 'M';
    bool is_older_than_18 = true;
    float averageGrade = 4.5;
    double balance = 5150.99;

    cout << "Size of int is " << sizeof(int) << " byte\n";
    cout << "Int min value is " << INT_MIN << endl;
    cout << "Int max value is " << INT_MAX << endl << endl;

    cout << "Size of unsigned int is " << sizeof(unsigned int) << " byte\n";
    cout << "Unsigned int max value is " << UINT_MAX << endl << endl;

    cout << "Size of boolean is " << sizeof(bool) << " bytes\n";
    cout << "Size of character is " << sizeof(char) << " bytes\n";
    cout << "Size of floating is " << sizeof(float) << " bytes\n";
    cout << "Size of double is " << sizeof(double) << " bytes\n";

    /* Memory overflow adalah suatu kondisi dimana nilai yang ditampung tipe data
    melebihi kapasitasnya */
    cout << "Memory Overflow" << endl;
    int intMaxValue = INT_MAX;
    cout << intMaxValue + 2 << endl;

    system("pause > 0");
}
