#include <iostream>
#include <array>
#include <exception>

using namespace std;

/* 1. syntax error
 * 2. linking error
 * 3. non-error
 * 4. runtime error
*/

int pembagian(int &Num, int &Denum){
    if(Denum == 0){
        throw overflow_error("Error: Pembagi nol");
    }
    return Num / Denum;
}

int main(){
    int a;
    int b;
    int c;

    array<int,5> arr = {0,1,2,3,4};

    /* Try, Catch, Exception
     * Merupakan keyword program yang berguna untuk membuat dummy.
     * Tujuannya untuk menguji apakah terdapat error dalam suatu fungsi.
     * Jika ada error, maka perubahan tidak akan disimpan dalam program utama.
     * Lalu Catch akan menangkap pesan error yang terjadi.
    */

    try{
        cout << arr.at(5) << endl;
    }catch(exception &e){
        cout << e.what() << endl;
    }

    #include "mainn.h"

    while(true){
        cout << "Num: ";
        cin >> a;
        cout << "Denum: ";
        cin >> b;

        try{
            c = pembagian(a,b);
            cout << c << endl;
        } catch(exception &e){
            cout << e.what() << endl;
        }
    }

    cout << "Akhir program" << endl;

    return 0;
}
