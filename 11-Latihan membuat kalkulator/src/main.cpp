#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
	float a, b, hasil;
	char aritmatika;
	
	cout << "Kalkulator C++ \n \n";

	cout << "Masukkan angka : ";
	cin >> a;
	cout << "Pilih operator (+,-,*,/) : ";
	cin >> aritmatika;
	cout << "Masukkan angka : ";
	cin >> b;

	if (aritmatika == '+'){
		hasil = a + b;
	}else if (aritmatika == '-'){
		hasil = a - b;
	}else if (aritmatika == '*'){
		hasil = a * b;
	}else if (aritmatika == '/'){
		hasil = a / b;
	} else{
		cout << "Operator anda salah" << endl;
	}

	cout << "Hasil : ";
	cout << a << aritmatika << b;
	cout << " = " << hasil << endl;
	
	// cout << "Test" << endl;
	return 0;
}
