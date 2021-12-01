#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    fstream myFile;
    int angka = 12345;
    
    /* data.bin tidak bisa dibaca oleh Windows */
    // myFile.open("data.bin", ios::out | ios::binary);
    
    myFile.open("data.txt", ios::out | ios::binary);
    myFile.write(reinterpret_cast<char*>(&angka), sizeof(angka));
    myFile.close();

    return 0;
}
