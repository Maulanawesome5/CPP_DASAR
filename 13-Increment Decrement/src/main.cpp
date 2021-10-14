#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
	// Increment dan Decrement
	// Pre-increment dan Post-increment
	// Pre-decrement dan Post-decrement
	int a = 5;
	int b = 5;

	cout << "===Post-increment===" << endl;
	cout << a << endl;
	cout << a++ << endl;
	cout << a << endl;

	cout << "===Pre-increment===" << endl;
	cout << b << endl;
	cout << ++b << endl;
	cout << b << endl;

	cout << "===Post-decrement===" << endl;
	cout << a << endl;
	cout << a-- << endl;
	cout << a << endl;

	cout << "===Pre-decrement===" << endl;
	cout << b << endl;
	cout << --b << endl;
	cout << b << endl;

	return 0;
}