#include <iostream>
#include <cstdlib>
// using namespace std; //Coba tidak pakai namespace

int main(int argc, char const *argv[])
{
    char lanjut;
    while (true){
        std::cout << "Lempar Dadu? (y/n) : ";
        std::cin >> lanjut;
        if (lanjut == 'y'){
            std::cout << 1 + (std::rand() % 6) << std::endl;
        } else if (lanjut == 'n'){
            break;
        } else {
            std::cout << "Warning: ketik y atau n dong kakak!!\n";
        }
        
    } // While body
    
    return 0;
}
