#include <iostream>

using namespace std;
/*
	// Syntax penulisan for loop
	
	for(inisialisasi; loop kondisi; increment){
		statement;
	}
*/
int main()
{
	// Jenis 1 menggunakan increment
	cout << "\n Loop 1 \n";
	for(int hitung = 1; hitung <= 10; hitung++){
		cout << hitung << endl;
	}	

	// Jenis 2 menggunakan modifikasi increment +
	cout << "\n Loop 2 \n";
	for(int hitung = 1; hitung <= 10; hitung += 2){
		cout << hitung << endl;
	}

	// Jenis 3 menggunakan modifikasi increment -
	cout << "\n Loop 3 \n";
	for(int i = 1; i >= -10; i--){
		cout << i << endl;
	}

	// Jenis 4 menggunakan compound
	int total = 0;
	cout << "\n Loop 4 \n";
	for(int i = 1; i <= 10; i++){
		total += i;
		cout << i << " || " << total << endl;
	}

	cout << "End of program" << endl;
	return 0;
}
