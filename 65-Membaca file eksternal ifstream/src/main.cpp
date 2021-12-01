#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char const *argv[])
{
    std::ifstream myFile; //ifstream untuk membaca file yang telah dibuat
    std::string data, buffer; //Membuat variabel bernama 'data' untuk menyimpan isi file 'data1.txt'
    bool isData = false;
    int nomor;
    std::string nama;

    // std::ios::in -> 
    // std::ios::ate -> memulai dari akhir file
    // std::ios::binary

    myFile.open("data.txt", std::ios::in);
    
    while (!isData){
        std::getline(myFile, buffer);
        data.append("\n" + buffer);
        if (buffer == "data"){
            isData = true;
        }
    }
    std::cout << data << std::endl;    
    
    std::getline(myFile, buffer);
    std::cout << buffer << std::endl;
    int jumlah_data = 0;
    while (!myFile.eof()){
        myFile >> nomor;
        myFile >> nama;
        std::cout << nomor << "\t" << nama << std::endl;
        jumlah_data++;
    }
    std::cout << "Jumlah data = " << jumlah_data << std::endl;

    return 0;
}
/* Kesimpulan:
    ifstream merupakan standard library yang digunakan untuk membaca isi data dari file diluar program.
    Terdapat function dan parameter yang biasa digunakan untuk membaca file eksternal, yaitu
    Method ifstream -> open
    Parameter ifstream -> std::ios::in, std::ios::ate, std::ios::binary
*/