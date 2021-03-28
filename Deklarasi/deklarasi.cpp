#include <iostream>

using namespace std;


int main()
{
	int a;
	int b;
	int c;

	a = 10;
	b = 11;
	c = a+b;

	cout << "a = ";
	cout << a << endl;
	cout << "b = ";
	cout << b << endl;
	cout << "c = ";
	cout << c << endl;

	int d;
	cout << "masukkan nilai d :";
	cin >> d;
	cout << "hasil dari d+c = ";
	cout << d+c << endl;


    cin.get();
    return 0;
}