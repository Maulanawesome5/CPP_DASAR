//---- Program Matematika Online ----
#include <iostream>
using namespace std;

// Prototype
int tambah(int a, int b);
int kurang(int a, int b);
int perkalian(int a, int b);
int pembagian(int a, int b);
int eksponen(int a);
float pecahan(float a1, float a2, float b1, float b2);
int jarakTempuh(int v, int t);

int main(){
  cout << "Test" << endl;
  cout << "5 + 2 = " << tambah(5,2) << endl;
  cout << "5 - 2 = " << kurang(5,2) << endl;
  cout << "5 x 5 = " << perkalian(5,5) << endl;
  cout << "6 : 3 = " << pembagian(6,3) << endl;
  cout << "100**2 = " << eksponen(10) << endl;
  cout << "4/6 - 2/4 = " << pecahan(4,6,2,4) << endl;
  cout << "60 km/jam x 2 jam = " << jarakTempuh(60,2) << " km" << endl;
}

//---- Deklarasi dibawah fungsi main ----
int tambah(int a = 1, int b = 1){
    return a + b;
};

int kurang(int a = 1, int b = 1){
    return a - b;
};
int perkalian(int a, int b){
    return a * b;
    };

int pembagian(int a, int b){
    return a / b;
    };

int eksponen(int a){
    int hitungKuadrat = a*a;
    return hitungKuadrat;
};

float pecahan(float a1, float a2, float b1, float b2){
    float hitungPecahan;
    float penyebut, pembilang;
    penyebut = a2 * b2;
    pembilang = (penyebut/a2*a1) - (penyebut/b2*b1);
    hitungPecahan = pembilang;
    return hitungPecahan;
};

int jarakTempuh(int v, int t){
    int S;
    S = v * t;
    return S;
};
