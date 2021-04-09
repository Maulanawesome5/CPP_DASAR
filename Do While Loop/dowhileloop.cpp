#include <iostream>

using namespace std;

/* //sintax penulisan do while
	
	do{
		aksi;
	}while(syarat);
*/

int main()
{
/*	
	// Contoh 1
	int a = 1;

	do{
		cout << "hore " << endl;;
	}while(a < 0);
*/
	// Contoh 2
	int a = 1;

	do{
		cout << "hore ";
		cout << a << endl;
		a++; // Menggunakan decrement
	}while(a < 10);

	cout << "End of program" << endl;
	cin.get();
	return 0;
}
