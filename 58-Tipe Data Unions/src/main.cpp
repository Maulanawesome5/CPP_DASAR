#include <iostream>

using namespace std;

/* Tipe Data Unions */
union Data{
    int a;
    char b[4];
};


int main(int argc, char const *argv[])
{
    Data data_union;
    data_union.a = 102484;

    cout << "data union a = " << data_union.a << endl;
    cout << "data union b = " << data_union.b << endl << endl;

    data_union.b[0] = 'a';
    data_union.b[1] = 'b';
    data_union.b[2] = 'c';
    data_union.b[3] = 'd';

    cout << "data union a = " << data_union.a << endl;
    cout << "data union b = " << data_union.b << endl << endl;

    cout << "Ukuran alokasi memory data union ";
    cout << sizeof(Data) << " byte" << endl;

    return 0;
}
