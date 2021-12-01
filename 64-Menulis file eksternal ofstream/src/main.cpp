#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
    //Membuat variabel bernama myFile yang bertipe data ofstream
    std::ofstream myFile;
    
    //Method open digunakan untuk membuka akses ke file data1.txt
    myFile.open("data1.txt", std::ios::out);
    // myFile << "Menulis dalam file data1.txt";
    // myFile << "Menulis baris baru di dalam file data1.txt";
    myFile << "\nMenulis baris kedua di dalam file data1.txt";
    myFile.close();

    myFile.open("data2.txt", std::ios::trunc);
    // myFile << "Menulis dalam file data2.txt";
    // myFile << "Menulis baris baru di dalam file data2.txt";
    myFile << "\nMenulis baris kedua di dalam file data2.txt";
    myFile.close();
    
    myFile.open("data3.txt", std::ios::app); // app = append
    // myFile << "Menulis dalam file data3.txt";
    // myFile << "Menulis baris baru di dalam file data3.txt";
    myFile << "\nMenulis baris kedua di dalam file data3.txt";
    myFile.close();

    return 0;
}

/*
    fstream merupakan standar library C++ yang memiliki fungsi untuk
    membuat, membaca, menulis, dan menyimpan data dalam bentuk file.
    Didalam fstream terdapat fungsi sebagai berikut...
    
    ifstream -> (input file stream) untuk membaca isi file dari luar program
    ofstream -> (output file stream) untuk menuliskan data ke file dari program

    Selain itu terdapat pula parameter yang berfungsi dalam membuat file
    sebagai berikut...
    ios::out --> secara default akan menuliskan isi data kedalam file
    ios::app --> akan menambahkan isi data di akhir baris
    ios::trunc --> secara default akan membuat file data, dan kalau ada akan direplace.
*/