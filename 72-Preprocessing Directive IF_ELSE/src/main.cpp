// ======== Bagian Preprocessing Directive ========
#include <iostream>

#define ID 1
#if ID == 1
    #define LANG "Indonesia"
#else
    #define LANG "English"

#endif
// ======== Akhir Preprocessing Directive ========

using namespace std;

int main(int argc, char const *argv[]){
    cout << "Bahasa dipilih: " << LANG << endl;
    return 0;
}


/*
    Kesimpulan:
    Preprocessing directive bisa digunakan untuk membuat if else statement.
    Tetapi untuk bagian aksi, harus diawali dengan #define
    Untuk menutup if else statement yang dibuat pada preprocessing directive,
    menggunakan #endif.
*/