#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string kata("cat");

    //Menampilkan data string
    cout << kata << endl;

    //Mengambil karakter berdasarkan index
    cout << "Index ke 0 : " << kata[0] << endl; 
    cout << "Index ke 1 : " << kata[1] << endl; 
    cout << "Index ke 2 : " << kata[2] << endl; 
    cout << "Index ke 3 : " << kata[3] << endl;

    //Mengubah karakter pada index
    kata[1] = 'e';
    cout << kata << endl;

    //Menyambung character, atau concatenate
    string kata2(kata + "ar");
    cout << kata2 << endl;

    string kata3("membahana");
    kata2.append(" " + kata3);
    cout << kata2 << endl;

    string kata4("ahay!!!");
    kata2 += " " + kata4;
    cout << kata2 << endl;

    return 0;
}
