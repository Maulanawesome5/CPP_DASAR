#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// Rumus Limas Segi Empat
	int p, l, t; //panjang, lebar, tinggi

	// Parameter
	p = 30;
	l = 10;
	t = 15;

	// Equation
	float Volume, Volume1;
	Volume = 1.3 * p * l * t; 	//Hasilnya 5850
	Volume1 = 1.3 * (p * l * t); 	//Hasilnya 5850

	// Result
	cout << "Hasilnya adalah " << Volume << " cm3" << endl;
	cout << "Hasilnya adalah " << Volume1 << " cm3" << endl;

	cin.get();
	return 0;
}
