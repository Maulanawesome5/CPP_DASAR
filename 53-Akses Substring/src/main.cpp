#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string kalimat1("Dayat suka olahraga supaya sehat");
    string kalimat2("Ucup suka makan pisang di pagi hari");

    cout << "1. " << kalimat1 << endl;
    cout << "2. " << kalimat2 << endl;

    // Substring, mengambil string di tengah-tengah
    // substr(index, panjang) --> fungsi default dari c++
    cout << kalimat1.substr(11,8) << endl;
    cout << kalimat2.substr(16,6) << endl;

    // Mencari posisi dari substring
    cout << "Posisi substring kata 'olahraga' : ";
    cout <<kalimat1.find("olahraga") << endl;
    cout << "Posisi substring kata 'pisang' : ";
    cout <<kalimat2.find("pisang") << endl;

    int a = kalimat1.find("ya");
    cout << a << endl;
    cout << kalimat1.find("ya", a + 1) << endl;
    
    // Mencari posisi substring dari index belakang
    // menggunakan fungsi rfind()
    cout << kalimat2.rfind("an") << endl;

    return 0;
}
