#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    fstream myFile;
    int angka = 3500;

    myFile.open("data.bin", ios::out | ios::binary);
    // myFile << angka;
    myFile.write(reinterpret_cast<char*>(&angka), sizeof(angka));
    myFile.close();

    return 0;
}
