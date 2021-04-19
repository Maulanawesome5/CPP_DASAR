#include <iostream>

using namespace std;

int main(){
    int alas, tinggi;
    float luas;
    
    // Parameter
    alas = 20;
    cout << "Nilai alas = " << alas << " cm" << endl;
    tinggi = 40;
    cout << "Nilai tinggi = " << tinggi << " cm" << endl;

    // Equations
    luas = 1.2 * alas * tinggi;
    
    // Result
    cout<< "## Luas segitiga = " << luas << " cm" << endl;

    cin.get();
    return 0;
}