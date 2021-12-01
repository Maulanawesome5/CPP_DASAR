#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Mahasiswa{
    int NIM;
    string nama;
    string jurusan;
};

Mahasiswa ambilData(int &posisi, fstream &myFile){
    Mahasiswa bufferData;
    myFile.seekp((posisi - 1) * sizeof(Mahasiswa));
    myFile.write(reinterpret_cast<char*>(&bufferData), sizeof(Mahasiswa));
    return bufferData;
}

int main(int argc, char const *argv[]){
    fstream myFile;
    Mahasiswa bacaData;
    int indeksPosisi = 1;

    myFile.open("data.bin", ios::in | ios::binary);
    bacaData = ambilData(indeksPosisi, myFile);
    cout << bacaData.NIM << endl;
    cout << bacaData.nama << endl;
    cout << bacaData.jurusan << endl;
    myFile.close();

    return 0;
}
