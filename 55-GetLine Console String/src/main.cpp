#include <iostream>
#include <string>


int main(int argc, char const *argv[])
{
    std::string kalimat_input;

    //getline (cin, variabel)
    std::cout << "masukkan kalimat : ";
    std::getline(std::cin, kalimat_input);

    std::cout << "kalimat yang anda masukkan => ";
    std::cout << kalimat_input << std::endl;

    //jumlah kata dari input
    int posisi = 0;
    int jumlah = 0;
    while (true){
        posisi = kalimat_input.find(" ", posisi + 1);
        jumlah++;
        if (posisi < 0){
            break;
        }
        
    }
     std::cout << "jumlah kata: " << jumlah << std::endl;

    return 0;
}

