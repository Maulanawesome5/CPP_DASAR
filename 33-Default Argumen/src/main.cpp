#include <iostream>
using namespace std;

// Fungsi prototype
double volume_kubus(double p = 1, double l = 1, double t = 1);

int main(){

    cout << "volume kubus : " << volume_kubus(3,4,5) << endl;
    cout << "volume kubus : " << volume_kubus(3,4) << endl;
    cout << "volume kubus : " << volume_kubus(3) << endl;
    cout << "volume kubus : " << volume_kubus() << endl;

    cin.get();
    return 0;
}

// default argumen atau nilai standart
double volume_kubus(double p, double l, double t){
    return p * l * t;
};

// Kesimpulan :
// default argumen berguna untuk suatu fungsi yang memiliki nilai bawaan
// misalkan phi = 3.14, bisa ditaruh dalam parameter fungsi