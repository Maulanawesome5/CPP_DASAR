#include <iostream>
using namespace std;

int x = 10; // Variabel global scope

int scope_global(){
    return x; // mengambil nilai x dari global scope
}
int x_local(){
    int x = 5; // variabel local yang scopenya x_local()
    return x;
}

int main(){
    cout << "1. variabel global : " << x << endl;
    int x = 8; // Variabel local didalam fungsi main()
    cout << "2. variabel local_main : " << x << endl;
    cout << "3. variabel scope_global : " << scope_global() << endl;
    cout << "4. variabel local_main : " << x << endl;
    cout << "5. variabel x_local : " << x_local() << endl;
    cout << "6. variabel local_main : " << x << endl;
    cout << "7. variabel local_main : " << x << endl;
    
    {
        cout << "8. variabel local_main : " << x << endl;
        // Block scope
        int x = 1;
        cout << "9. variabel local_block : " << x << endl;
        cout << "10. variabel global : " << ::x << endl;
    }
    cout << "11. variabel local_main : " << x << endl;
    
    cin.get();
    return 0;
}
