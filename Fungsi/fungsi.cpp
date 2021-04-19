#include <iostream>
#include <cmath>

using namespace std;

/*
Fungsi-fungsi yang terdapat dalam standart Library CMath
-ceil(x)	==> pembulatan ke atas
-cos(x)		==> cosinus
-exp(x)		==> eksponen
-fabs(x)	==> nilai absolut dalam float
-floor(x)	==> pembulatan ke bawah
-fmod(x)	==> modulus dalam float
-log(x)		==> logaritma dengan basis natural
-log10(x) 	==> logaritma dengan basis 10
-pow(x,y)	==> x pangkat y
-sin(x)		==> sinus
-sqrt(x)	==> akar kuadrat
-tan(x)		==> tangent
*/

int main()
{
	int x, y;	
	cout << "Menghitung akar dari x: ";
	cin >> x;

	//double y = sqrt(x);
	//cout << "Akarnya adalah: "<< y << endl;
	cout << "Akarnya adalah: "<< sqrt(x) << endl;


	cin.get();
	return 0;
}
