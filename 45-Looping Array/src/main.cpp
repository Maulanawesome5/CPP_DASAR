#include <iostream>
// #include <array>
using namespace std;

int main(){
    // Looping array di c++11
    /*
        for(deklarasi variabel : array){
            statement;
        }
    */
    int arrayNilai[10] = {0,1,2,3,4,5,6,7,8,9};

    for(int nilai : arrayNilai){
        cout << "address " << &nilai << " nilainya" << nilai << endl;
        nilai = 1;
    }
    
    cout << endl;
    for(int &nilaiRef : arrayNilai){
        cout << "address " << &nilaiRef << " nilainya" << nilaiRef << endl;
        nilaiRef *= 2;
    }

    cout << endl;
    for(int &nilaiRef : arrayNilai){
        cout << "address " << &nilaiRef << " nilainya" << nilaiRef << endl;
    }
    
    return 0;
}

// Kesimpulan :