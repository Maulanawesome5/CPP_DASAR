#include <iostream>

using namespace std;

int main(){
/*
	//=================== Process Direct ===================
	//Parameter
	int p, l, t;

	int Volume;
	int LuasPermukaan;
	int Keliling;

	
	//Value
	p = 15;
	l = 3;
	t = 30;	

	//Equation
	Volume = p * l * t;
	LuasPermukaan = 2*((p*l)+(l*t)+(p*t));
	Keliling = 4*(p + l + t);

	cout << "Volume Balok = " << Volume << " cm3" << endl;
	cout << "LuasPermukaan = " << LuasPermukaan << " cm2" << endl;
	cout << "Keliling = " << Keliling << " cm" << endl;
*/

	//=================== Process Indirect ===================
	// Parameter
	int p, l, t;
	
	cout << "Masukkan nilai panjang : ";
	cin >> p;

	cout << "Masukkan nilai lebar : ";
	cin >> l;
	
	cout << "Masukkan nilai tinggi : ";
	cin >> t;

	// Process
	int Volume;
	int LuasPermukaan;
	int Keliling;
	
	Volume = p*l*t;
	LuasPermukaan = 2*((p*l)+(l*t)+(p*t));
	Keliling = 4*(p + l + t);
	
	cout << "## Volume balok adalah " << Volume << " cm3\n";
	cout << "## Luas Permukaan balok adalah " << LuasPermukaan << " cm2\n";
	cout << "## Keliling balok adalah " << Keliling << " cm\n";

	cin.get();
	return 0;
}
