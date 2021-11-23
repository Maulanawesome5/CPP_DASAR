#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string input;
    string kata_rahasia("ucup");

    while (true){
        cout << "tebak nama : ";
        cin >> input;
        if (input == kata_rahasia){
            cout << "Tebakan anda benar" << endl;
            break;
        }
        cout << "Tebakan anda salah !" << endl;
    }
    
    cout << "Akhir dari program" << endl;
    

    return 0;
}
