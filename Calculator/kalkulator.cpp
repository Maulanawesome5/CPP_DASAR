#include <iostream>

using namespace std;

int main(){
	float a,b;

	char aritmatika;

	cout << "===== Welcome to calculator ===== \n \n";

	// masukkan input angka dan operator dari cmd
	cout << "Masukkan nilai a = ";
	cin >> a;
	cout << "Pilih operator (+ - / *) = ";
	cin >> aritmatika;
	cout << "Masukkan nilai b = ";
	cin >> b;
	
	cout << "\n Hasil dari ";
	cout << a << aritmatika << b;

	float hasil;
	if (aritmatika == '+'){
		hasil = a + b;
	} else if (aritmatika == '-'){
		hasil = a - b;
	} else if (aritmatika == '*'){
		hasil = a * b;
	} else if (aritmatika == '/'){
		hasil = a / b;
	} else {
		cout << "Tidak ditemukan !" << endl;
	}

	cout << " = " << hasil << endl;

	cin.get();
	return 0;
}
