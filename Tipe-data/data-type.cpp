#include <iostream>

using namespace std;


int main()
{
	// Tipe data bilangan bulat
	int a = 5; //maksimal sebanyak 32-bit
	long b = 6;
	short c = 7;
	
	// Tipe data bilangan desimal
	float d = 2.5;
	double e = 3.14;

	// Tipe data character
	char f = 'anjay';

	// Tipe data boolean
	bool g = true;

	cout << b << endl;
	cout << sizeof(b) << "byte" << endl;
	cout << numeric_limits<long>::max() <<endl;
	cout << numeric_limits<long>::min() <<endl;
    cin.get();
    return 0;
}