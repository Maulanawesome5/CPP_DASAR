#include <iostream>

using namespace std;


int main()
{
	// Komparasi, perbandingan atau relation expression
	int a = 2;
	int b = 2;

	bool hasil1, hasil2;

	// Sebanding, simbol '=='
	hasil1 = (a == b);

	// Tidak sebanding, simbol '!='
	hasil2 = (a != b);

	// Kurang dari, simbol '<'
	hasil1 = (a <= b);
	// Lebih dari, simbol '>'
	hasil2 = (a >= b);

	cout << hasil1 << endl;
	cout << hasil2 << endl;
	
    cin.get();
    return 0;
}