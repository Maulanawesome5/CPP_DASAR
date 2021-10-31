#include <iostream>
using namespace std;

// Fungsi iterasi biasa
int kuadrat(int a, int b){
    int hasil = a;
    for(int i = 1; i < b; i++){
        hasil = hasil * a;
    }
    return hasil;
}
// Fungsi rekursif terbatas (Finite Recursion)
int kuadratRekursif(int a, int b){
    if(b <= 1){
        cout << "akhir dari rekursif\n";
        return a;
    }else{
        cout << "rekursif\n";
        return a * kuadratRekursif(a,(b-1));
    }
}

int main(){

    int a, b;
    cout << "angka : ";
    cin >> a;
    cout << "pangkat : ";
    cin >> b;
    cout << "Hasil iterasi = " << endl;

    cin.get();
    return 0;
}

// Kesimpulan :
//