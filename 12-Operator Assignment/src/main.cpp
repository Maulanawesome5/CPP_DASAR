#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
	// Assignment
	int a = 10;

	// Assignment operator
	// Variabel = variabel  operator 	eskpresi
	// 		a 	= 	a 		(+ - * /) 		3
	// Variabel operator ekspresi
	// 		a 		+= 		3
	
	a += 3;
	cout << "ditambah 3 menjadi " << a << endl;
	a -= 3;
	cout << "dikurangi 3 menjadi " << a << endl;
	a *= 3;
	cout << "dikali 3 menjadi " << a << endl;
	a /= 3;
	cout << "dibagi 3 menjadi " << a << endl;
	a %= 3;
	cout << "dimodulus 3 menjadi " << a << endl;

	return 0;
}