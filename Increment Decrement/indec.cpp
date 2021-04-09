#include <iostream>

using namespace std;

int main()
{
//======== MATERI INCREMENT DAN DECREMENT ========//
	int a,b,c,d;

// INCREMENT
	a = 5;
	b = 5;
	// POST INCREMENT
	cout << "Post Increment \n";
	cout << a << endl;
	cout << a++ << endl;
	cout << a << endl;

	// PRE INCREMENT
	cout << "Pre Increment \n";
	cout << b << endl;
	cout << ++b << endl;
	cout << b << endl;

// DECREMENT
	c = 10;
	d = 10;
	// POST DECREMENT
	cout << "Post Decrement \n";
	cout << c << endl;
	cout << c-- << endl;
	cout << c << endl;

	// PRE DECREMENT
	cout << "Pre Decrement \n";
	cout << d << endl;
	cout << --d << endl;
	cout << d << endl;

	cin.get();
	return 0;
}
