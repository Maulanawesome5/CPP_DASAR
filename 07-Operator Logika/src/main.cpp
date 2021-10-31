#include <iostream>
using namespace std;

int main()
{
	// Operator Logika terdiri dari 'not'; 'and'; 'or'
	int a = 3;
	int b = 2;

	bool hasil;

	// Operator not
	cout << "Hasil operator NOT" << endl;
	hasil = !(a == 3);

	// Operator and
	// Kedua nilai harus benar untuk menghasilkan true
	cout << "Hasil operator AND" << endl;
	hasil = (a == 3) and (b == 2); // true and true
	cout << hasil << endl;
	hasil = (a == 4) and (b == 2); // false and true
	cout << hasil << endl;
	hasil = (a == 3) and (b == 3); // true and false 
	cout << hasil << endl;
	hasil = (a == 4) and (b == 3); // false and false
	cout << hasil << endl;

	// Operator or

	cout << hasil << endl;

    return 0;
}