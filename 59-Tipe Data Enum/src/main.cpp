#include <iostream>

using namespace std;

/* Tipe Data Enumerate */
enum warna{
    merah, putih, hitam, coklat, kuning, biru
};

int main(int argc, char const *argv[])
{
    warna kain;
    kain = coklat;
    if (kain == hitam){
        cout << "Warna kain hitam" << endl;
    } else if (kain == merah){
        cout << "Warna kain bukan hitam, tapi merah" << endl;
    } else {
        cout << "Kain bukan hitam atau merah" << endl;
    }
    
    
    cout << "Berada pada index ke-" << kain << endl;

    return 0;
}
