#include <iostream>

using namespace std;


int main()
{
	int a = 6;
	int b = 4;
	float c = 15;
	int d = 2;

	int hasil;
	//Simbol operator +, -, *, /, %

	// Penjumlahan
	hasil = a + b;
	cout << a << "+" << b << " = " << hasil << endl;

	// Pengurangan
	hasil = a - b;
	cout << a << "-" << b << " = " << hasil << endl;

	// Perkalian
	hasil = a * b;
	cout << a << "x" << b << " = " << hasil << endl;

	// Pembagian
	hasil = c / a;
	cout << c << ":" << a << " = " << hasil << endl;

	// Modulus
	//hasil = c % d;
	//cout << c << "%" << d << " = " << hasill << endl;

	// Urutan eksekusi
	hasil = (a + b) * d;
	cout << hasil << endl;

    return 0;
}