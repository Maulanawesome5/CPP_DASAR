#include <iostream>
using namespace std;

// Fungsi dasar
int luas_kotak(int panjang, int lebar){
    int luas = panjang * lebar;
    return luas;
}

// Fungsi overloading
int luas_kotak(int sisi){
    int luas = sisi * sisi;
    return luas;
}

double luas_kotak(double sisi){
    return sisi * sisi;
}

int main(){

    cout << "Luas kotak 2x3 = " << luas_kotak(2,3) << endl;
    cout << "Luas kotak 2x2 = " << luas_kotak(2) << endl;
    cout << "Luas kotak 2,5 x 2,5 = " << luas_kotak(2.5) << endl;

    cin.get();
    return 0;
}

// Kesimpulan :
// Overloading akan menimpa data dalam suatu fungsi yang namanya sama