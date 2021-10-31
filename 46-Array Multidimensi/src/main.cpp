#include <iostream>
using namespace std;


void printArray(int *ptrArray, int baris, int kolom){
    int index = 0;
    for(int i = 0; i < baris; i++){
        cout << "[ ";
        for(int j=0; j<kolom; j++){
            cout << *(ptrArray + index) << " ";
            index++;
        }
        cout << " ]" << endl;
    }
}
int main(){
    // ======== array multidimensi ========
    // array[baris][kolom]
    // int arrayMulti[2][2] = {1,2,3,4};

    const int baris = 2;
    const int kolom = 2;
    int arrayMulti[baris][kolom] = {1,2,3,4};

    printArray(*arrayMulti, baris, kolom);
    
    return 0;
}

// Kesimpulan :