#include <iostream>
#include <cmath>
// using namespace std; //Coba tidak pakai namespace

/*
    // Fungsi yang terdapat dalam standar library CMath
    ceil(x)   ==> Pembulatan ke atas
    cos(x)    ==> cosinus
    exp(x)    ==> eksponen
    fabs(x)   ==> nilai absolut dalam float
    floor(x)  ==> pembulatan ke bawah
    fmod(x)   ==> modulus dalam float
    log(x)    ==> logaritma dengan basis natural
    log10(x)  ==> logaritma dengan basis 10
    pow(x, y) ==> x pangkat y
    sin(x)    ==> sinus
    sqrt(x)   ==> akar kuadrat
    tan(x)    ==> tangent
*/


int main(int argc, char const *argv[])
{
    int x;
    std::cout << "Menghitung akar kuadrat" << std::endl;
    std::cout << "Masukan nilai untuk 'x' : ";
    std::cin >> x;
    std::cout << "Akar kuadrat dari " << x << " = ";
    std::cout << std::sqrt(x) << std::endl;
    
    return 0;
}
