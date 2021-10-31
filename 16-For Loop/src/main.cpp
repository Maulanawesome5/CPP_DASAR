#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
	/*
		// Penulisan sintaks for loop
		// (inisialisasi;        loop kondisi;      increment){}
		for(tipe data, variabel; variabel, syarat; variabel increment ){
			aksi;
		}
	*/

	for(int hitung = 1; hitung <= 10; hitung++){
		cout << hitung << endl;
	}
	
	cout << endl;
	for(int hitung = 10; hitung >= 1; hitung--){
		cout << hitung << endl;
	}

	cout << endl;
	int total = 0;
	for(int i = 1; i <= 10; total += i, i++){
		cout << i << " || " << total << endl;
	}

	return 0;
}