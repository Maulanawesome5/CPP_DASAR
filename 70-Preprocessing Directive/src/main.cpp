#include <iostream>

/* Macro, nilai yang diberikan literal
tidak ditampung memory */
#define PHI 3.14159265359

/* Variabel global scope
nilai dan ukuran tipe data ditampung memory */
double phi = 3.14159265359;

int main(int argc, char const *argv[])
{
    std::cout << "Variabel phi = " << phi;
    std::cout << ", Address phi = " << &phi << std::endl;
    std::cout << "Ukuran phi = " << sizeof(phi) << " byte" << std::endl;
    std::cout << std::endl;
    std::cout << "Literal  PHI = " << PHI << std::endl;
    // std::cout << ", Address PHI = " << &PHI << std::endl; // error
    std::cout << "Ukuran PHI = " << sizeof(PHI) << " byte" << std::endl;
    
    return 0;
}
