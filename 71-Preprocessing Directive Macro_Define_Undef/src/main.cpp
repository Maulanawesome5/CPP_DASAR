// ======== Bagian Preprocessing Directive ========
#include <iostream>
#include <string>
#define PI 3.14159265359
#define BAHASA "indonesia"
#define KUADRAT(X) (X*X) //Macro untuk fungsi
#define NILAI_MAX(A,B) ((A > B) ? A:B) //Macro untuk ternary

// ======== Akhir Preprocessing Directive ========
using namespace std;

int kuadrat(int x){
    return x * x;
}

int nilai_max(int a, int b){
    return ((a > b) ? a:b);
}

int main(int argc, char const *argv[])
{
    cout << "Nilai PI  = " << PI << endl;
    cout << "Bahasa    = " << BAHASA << endl;
    cout << "Kuadrat X = " << KUADRAT(5) << endl;
    cout << "Ternary   = " << NILAI_MAX(10,5) << endl;

    // Variabel dan fungsi
    int a = 5;
    int b = 6;
    double pi = 3.14159265359;
    string bahasa = "indonesia";
    
    cout << "Variabel PI     = " << pi << endl;
    cout << "Variabel Bahasa = " << bahasa << endl;
    cout << "Fungsi Kuadrat  = " << kuadrat(a) << endl;
    cout << "Ternary Operator= " << nilai_max(a,b) << endl;
    
    return 0;
}

/*
    Kesimpulan:
    Macro preprocessing directive digunakan untuk mewakili suatu nilai.
    Sama halnya dengan variabel, namun macro tidak ditampung dalam memory.
    Pada program main.cpp, cout diisi dengan nama macro (PI, BAHASA, KUDARAT(5)).
    Lihat pada file main.p
    Disitu terlihat bahwa yang di proses pada bagian cout adalah value dari macro.

*/