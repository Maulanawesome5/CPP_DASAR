#include <iostream>
/*
#define FOO "Foo lama"

//if define macro preprocessor directive
#ifdef FOO
    #define ADA "Foo ada disini"
#else
    #define ADA "Foo tidak ada disini"
#endif // FOO

//if not define macro preprocessor directive
#ifndef FOO
    #define FOO "Foo baru"
#endif // FOO
*/

#include "bersama.h"
#include "foo.h"
#include "bar.h"

using namespace std;

int main()
{
    Mahasiswa mahasiswa;
    mahasiswa.NIM = 1234;

    cout << "NIM : " << mahasiswa.NIM << endl;

    cin.get();
    return 0;
}
