#include <iostream>

using namespace std;

/* //sintax penulisan while
	
	while(syarat){
		aksi;
	}
*/	
int main(int argc, char const *argv[])
{
/*	
	// Contoh 1
	int a = 5;
	while(a < 10){
		cout << "hore" << endl;
	}


	// Contoh 2
	int a = 5;
	while(a < 10){
		cout << "hore" << endl;
		a = 11;
	}
*/
	int a = 5;
	while(a <= 10){
		cout << "hore ";
		cout << a << endl;
		a += 1; //Menggunakan increment
	}

	cout << "End of program" << endl;
	cin.get();
	return 0;
}
