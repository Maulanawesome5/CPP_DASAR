// Membuat program game gunting batu kertas
#include <iostream>

// Membuat variabel constant
const char BATU = 'b';
const char KERTAS = 'k';
const char GUNTING = 'g';

// Function untuk mengacak pilihan komputer
char getComputerOption();

// Function untuk mengacak pilihan human/user
char getUserOption();

// Function untuk menampilkan opsi yang dipilih
void showSelectedOption(char);

// Function untuk menampilkan siapa yang menang
void chooseWinner(char, char);

int main(){
    // User choice
    char userChoice;
    
    // Computer choice
    char compChoice;
    
    userChoice = getUserOption();
    std::cout << "Pilihan anda adalah: " << std::endl;
    showSelectedOption(userChoice);
    
    std::cout << "Komputer memilih: " << std::endl;
    compChoice = getComputerOption();
    showSelectedOption(compChoice);
    
    chooseWinner(userChoice, compChoice);
    
    std::cout << "Program berjalan" << std::endl;
    return 0;
}

// Function untuk mengacak pilihan komputer
char getComputerOption(){
    srand(time_t(0));
    // Random number
    int num = rand() % 3 + 1;
    if (num == 1) return 'b';
    if (num == 2) return 'k';
    if (num == 3) return 'g';
}

// Function untuk mengacak pilihan human/user
char getUserOption(){
    char c;
    std::cout << "BATU, GUNTING dan KERTAS Game !" << std::endl;
    std::cout << "Pilihlah satu pilihan yang diberikan" << std::endl;
    std::cout << "____________________________________" << std::endl;
    std::cout << "(b) pilih Batu" << std::endl;
    std::cout << "(k) pilih Kertas" << std::endl;
    std::cout << "(g) pilih Gunting" << std::endl;
    std::cin >> c;

    while (c != 'b' && c != 'k' && c != 'g'){
        std::cout << "Tolong hanya memilih jawaban sesuai yang diberikan." << std::endl;
        std::cout << "(b) pilih Batu" << std::endl;
        std::cout << "(k) pilih Kertas" << std::endl;
        std::cout << "(g) pilih Gunting" << std::endl;
        std::cin >> c;
    }
    return c;
}

// Function untuk menampilkan opsi yang dipilih
void showSelectedOption(char option){
    if(option == 'b') std::cout << "Batu" << std::endl;
    if(option == 'k') std::cout << "Kertas" << std::endl;
    if(option == 'g') std::cout << "Gunting" << std::endl;
}

// Function untuk menampilkan siapa yang menang
void chooseWinner(char uChoice, char cChoice){
    if (uChoice == BATU && cChoice == KERTAS) {
        std::cout << "Computer Wins! KERTAS membungkus BATU."<< std::endl;
    } else if (uChoice == KERTAS && cChoice == GUNTING) {
        std::cout << "Computer Wins! GUNTING memotong KERTAS."<< std::endl;
    } else if (uChoice == GUNTING && cChoice == BATU) {
        std::cout << "Computer Wins! BATU menghantam GUNTING."<< std::endl;
    } else if (uChoice == BATU && cChoice == GUNTING) {
        std::cout << "You Win! BATU menghantam GUNTING."<< std::endl;
    } else if (uChoice == KERTAS && cChoice == BATU) {
        std::cout << "You Win! KERTAS membungkus BATU."<< std::endl;
    } else if (uChoice == GUNTING && cChoice == KERTAS) {
        std::cout << "You Win! GUNTING memotong KERTAS."<< std::endl;
    } else {
        std::cout << "Seri. Main lagi dan menangkan Game." << std::endl;
    }
}