#include <iostream>

using namespace std;

int main(){
	int a, b;
//Program satu
	cout << "masukkan angka a = ";
	cin >> a;

	if (a == 5){
		cout << "Benar, nilainya adalah 5" << endl;
	} else {
		cout << "Salah, nilainya adalah 5" << endl;
	}

	cout << "Selesai" << endl;
	cout << "\n";

//Program dua
	cout << "masukkan angka b = ";
	cin >> b;

	if (b == 6){
		cout << "nilai ini adalah 6" << endl;
	} else if (b == 5){
		cout << "nilai ini adalah 5" << endl;
	} else if (b == 4){
		cout << "nilai ini adalah 4" << endl;
	} else if (b == 3){
		cout << "nilai ini adalah 3" << endl;
	} else {
		cout << "sudah terlalu kurang" << endl;
	}

	cin.get();
	return 0;
}
