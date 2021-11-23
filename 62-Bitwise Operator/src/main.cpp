#include <iostream>
#include <string>
#include <bitset>

void displayBiner(unsigned short value, std::string nama){
    std::cout << nama << " = " << std::bitset<8>(value) << std::endl;
}

int main(int argc, char const *argv[])
{
    unsigned short a = 6;
    unsigned short b = 10;
    unsigned short c;

    // bitset<panjang digit>(variabel) // Menampilkan nilai dalam biner
    std::cout << "Nilai a = " << a << std::endl;
    std::cout << " - Nilai biner = ";
    std::cout << std::bitset<8>(a) << std::endl;

    std::cout << "Nilai b = " << b << std::endl;
    std::cout << " - Nilai biner = ";
    std::cout << std::bitset<8>(b) << std::endl << std::endl;

    std::cout << "Bitwise AND '&'" << std::endl;
    c = a & b;
    displayBiner(a, "a");
    displayBiner(b, "b");
    displayBiner(c, "c");
    std::cout << "Nilai AND c = " << c << std::endl << std::endl;

    std::cout << "Bitwise OR '|'" << std::endl;
    c = a | b;
    displayBiner(a, "a");
    displayBiner(b, "b");
    displayBiner(c, "c");
    std::cout << "Nilai OR c = " << c << std::endl << std::endl;

    std::cout << "Bitwise XOR '^'" << std::endl;
    c = a ^ b;
    displayBiner(a, "a");
    displayBiner(b, "b");
    displayBiner(c, "c");
    std::cout << "Nilai XOR c = " << c << std::endl << std::endl;
    
    std::cout << "Bitwise NOT '~'" << std::endl;
    c = ~a;
    displayBiner(a, "a");
    displayBiner(c, "c");
    std::cout << "Nilai NOT c = " << c << std::endl << std::endl;

    std::cout << "Bitwise SHIFT LEFT '<<'" << std::endl;
    c = a << 1;
    displayBiner(a, "a");
    displayBiner(c, "c");
    std::cout << "Nilai SHIFT LEFT c = " << c << std::endl << std::endl;

    std::cout << "Bitwise SHIFT RIGHT '>>'" << std::endl;
    c = a >> 1;
    displayBiner(a, "a");
    displayBiner(c, "c");
    std::cout << "Nilai SHIFT RIGHT c = " << c << std::endl << std::endl;
    
    return 0;
}

/*
    Bitwise Operator
    &   --->  Bitwise AND
    |   --->  Bitwise inclusive OR
    ^   --->  Bitwise exclusive OR
    ~   --->  Bitwise NOT
    <<  --->  Shift Left
    >>  --->  Shift Right
*/