#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Mahasiswa{
    int NIM;
    string nama;
    string jurusan;
};

Mahasiswa ambilData(int posisi, fstream &myFile){
    Mahasiswa bufferData;
    myFile.seekp((posisi - 1) * sizeof(Mahasiswa));
    myFile.write(reinterpret_cast<char*>(&bufferData), sizeof(Mahasiswa));
    return bufferData;
}

void menulisData(Mahasiswa &data, fstream &myFile){
    myFile.write(reinterpret_cast<char*>(&data), sizeof(Mahasiswa));
}

void indexingData(int posisi, Mahasiswa &bufferData, fstream &myFile){
    myFile.seekp((posisi - 1) * sizeof(Mahasiswa));
    myFile.write(reinterpret_cast<char*>(&bufferData), sizeof(Mahasiswa));
}

int main(int argc, char const *argv[]){
    fstream myFile;
    myFile.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);

    Mahasiswa mahasiswa1, mahasiswa2, mahasiswa3, output;
    mahasiswa1.NIM = 123;
    mahasiswa1.nama = "ucup";
    mahasiswa1.jurusan = "pertanian";
    
    mahasiswa2.NIM = 456;
    mahasiswa2.nama = "otong";
    mahasiswa2.jurusan = "perikanan";
    
    mahasiswa3.NIM = 789;
    mahasiswa3.nama = "marisa";
    mahasiswa3.jurusan = "perhotelan";

    menulisData(mahasiswa1, myFile);    
    menulisData(mahasiswa2, myFile);    
    menulisData(mahasiswa3, myFile);

    mahasiswa2.nama = "mario";
    indexingData(2, mahasiswa2, myFile);

    output = ambilData(2, myFile);
    cout << output.NIM << endl;
    cout << output.nama << endl;
    cout << output.jurusan << endl;
    myFile.close();

    return 0;
}
