#include <iostream>

using namespace std;

int main()
{
    /* ASCII
     * American Standard Code for Information Interchange
    */

    char c1, c2, c3, c4, c5;

    // Nomor ascii dari huruf a dan A
    cout << (int)'a' << endl;
    cout << int('A') << endl;

    // Huruf berdasarkan nomor ascii
    cout << char(65) << endl << endl;

    // Mencari nomor ASCII berdasar input huruf
    cout << "Enter 5 letters: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "ASCII message: ";
    cout << int(c1) << " ";
    cout << int(c2) << " ";
    cout << int(c3) << " ";
    cout << int(c4) << " ";
    cout << int(c5) << " " << endl << endl;

    return 0;
}
