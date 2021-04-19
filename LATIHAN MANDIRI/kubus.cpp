#include <iostream>

using namespace std;

int main(){
/*
	//=================== Process Direct ===================
	//Parameter
	int s;

	int Volume;
	int LuasPermukaan;
	int Keliling;
	int LSisi;

	//Value
	s = 20;
	
	//Equation
	Volume = s*s*s;
	LuasPermukaan = 6*(s*s);
	Keliling = 12*s;
	LSisi = s*s;

	//Process
	cout << "Volume Balok = " << Volume << " cm3" << endl;
	cout << "LuasPermukaan = " << LuasPermukaan << " cm2" << endl;
	cout << "Keliling = " << Keliling << " cm" << endl;
	cout << "Luas Sisi = " << LSisi << " cm" << endl;
*/
	
	//=================== Process Indirect ===================
	// Parameter
	int s;
	cout << "Masukkan nilai sisi : ";
	cin >> s;

	// Process
	int Volume;
	int LuasPermukaan;
	int Keliling;
	int LSisi;
	
	Volume = s*s*s;
	LuasPermukaan = 6*(s*s);
	Keliling = 12*s;
	LSisi = s*s;
	
	cout << "## Volume kubus adalah " << Volume << " cm3\n";
	cout << "## Luas Permukaan kubus adalah " << LuasPermukaan << " cm2\n";
	cout << "## Keliling kubus adalah " << Keliling << " cm\n";
	cout << "## Luas Sisi kubus adalah " << LSisi << "cm\n";
	
	cin.get();
	return 0;
}
