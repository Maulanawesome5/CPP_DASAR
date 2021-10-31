#include <iostream>
using namespace std;

void fungsi(int &b){
    b = 10;
    cout << "Address dari b = " << &b << endl;
    cout << "  Nilai dari b = " << b << endl;
}

void kuadrat(int &nilaiReference){
    nilaiReference = nilaiReference * nilaiReference;
}

int main(){

    int a = 5;
    cout << "Address dari a = " << &a << endl;
    cout << "  Nilai dari a = " << a << endl;

    fungsi(a);
    cout << "  Nilai a = " << a << endl;
    kuadrat(a);
    cout << "  Nilai a = " << a << endl;
    
    cin.get();
    return 0;
}

// Kesimpulan :