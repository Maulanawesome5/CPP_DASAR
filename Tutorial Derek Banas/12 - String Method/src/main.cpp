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
     * @brief String Method
     * @author Maulana Aji Wicaksono
     * @attention Membahas string method, yaitu method atau function
     * apa saja yang bisa digunakan untuk memanipulasi tipe data string
     * pada bahasa pemrograman C++
    */

    string str1 = "I'm a string";

    // method untuk mengakses string
    cout << "1st index = " << str1[0] << endl;
    cout << "Last index = " << str1.back() << endl;
    cout << "Panjang kalimat = " << str1.length() << endl;

    // copy isi string ke variabel baru
    string str2 = str1;
    cout << "Copy to str2 = " << str2 << endl;

    // copy string dimulai dari index ke 4 sampai terakhir.
    string str3(str2, 4);
    cout << "Copy to str3 = " << str3 << endl;

    // string concatenation (menyambung string)
    string str4 = str1 + " and your not";
    cout << "Concate to str4 = " << str4 << endl;

    // method string
    str4.append("!");
    cout << "Append to str4 = " << str4 << endl; // menambah string di posisi akhir

    str4.erase(12, str4.length() - 1);
    cout << "Erase str4 = " << str4 << endl; // menghapus string

    if(str4.find("string") != string::npos){
        // npos = number position
        cout << "String index : " << str4.find("string") << endl;
    }

    cout << "Substring : " << str4.substr(6, 6) << endl; // akses substring

    // method to_string() untuk mengkonversi apapun menjadi str
    string strNumber = to_string(1 + 2);
    cout << "I'm a String number : " << strNumber << endl;

    char letterZ = 'z';
    char number5 = '5';
    char blankSpace = ' ';

    // is method, mengecek tipe data dari suatu nilai. Di return menjadi boolean
    cout << "Is z a letter or Number ? " << isalnum(letterZ) << endl;
    cout << "Is z a letter ? " << isalpha(letterZ) << endl;
    cout << "Is 5 a number ? " << isdigit(number5) << endl;
    cout << "Is space a space ? " << isspace(blankSpace) << endl;


    return 0;
}
