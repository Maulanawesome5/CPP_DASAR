#include <iostream>
#include <array>

using namespace std;

const int kolom = 3;
const int baris = 2;
void printArray(array <array <int, kolom>,baris> member){
    for(array <int,kolom> vectorBaris : member){
        cout << "[ ";
        for(int nilaiKolom: vectorBaris){
            cout << nilaiKolom << " ";
        }
        cout << " ]" << endl;
    }
}

int main(){
    // const int kolom = 3; // dipindahkan ke prototype
    // const int baris = 2; // dipindahkan ke prototype
    array<array<int, kolom>,baris> member = {0,1,2,3,4,5};

    printArray(member);
    
    return 0;
}