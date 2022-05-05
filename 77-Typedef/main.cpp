#include <iostream>

using namespace std;

int main(){
    /*
     * Typedef
     * Memberikan alias untuk tipe data yang kompleks
     */

    typedef int vektor2D[2];
    vektor2D x = {1, 2};
    cout << "vektor 2D = " << x[0] << " & " << x[1] << endl;

    typedef unsigned long ulong;
    ulong angka = 2500000;
    cout << "Unsigned long = " << angka << endl;

    typedef double matriks[2];
    matriks a = {3.14, 22.7};
    cout << "matriks 2D = " << a[0] << " & " << a[1] << endl;

    return 0;
}
