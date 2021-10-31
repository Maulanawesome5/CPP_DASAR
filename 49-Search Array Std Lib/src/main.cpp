#include <iostream>
#include <array>
#include <algorithm>

// using namespace std;

const size_t arraySize = 10;

void printArray(std::array <int, arraySize> &angka){
    std::cout << "Array : ";
    for(int &a : angka){
        std::cout << a << " ";
    }
    std::cout << std::endl;
}

int main(){
    std::array <int, arraySize> angka = {9,4,6,7,8,1,3,2,5,0};
    printArray(angka);

    int cariAngka;
    int hasil;
    /* 
        1. Sorting dahulu
        2. Search --> menggunakan fungsi std::binary_search()
    */
    std::cout << "Mencari angka dalam array diatas : \n";
    std::cin >> cariAngka;
    std::sort(angka.begin(), angka.end());
    hasil = std::binary_search(angka.begin(), angka.end(), cariAngka);
    
    if(hasil){
        std::cout << "Angka ketemu " << std:: endl;
    }else{
        std::cout << "Angka tidak ketemu" << std::endl;
    }

    return 0;
}