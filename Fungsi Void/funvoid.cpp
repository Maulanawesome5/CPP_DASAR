#include <iostream>
using namespace std;

// Reporter, fungsi yang bisa mengembalikan nilai
int kuadrat(int x){
	int y;
	y = x * x;
	return y;
}

/* Void adalah tipe data kosong
Void disebut juga worker, karena memproses data tanpa
mengembalikan suatu nilai */
void tampilkan(int input){
	cout << "Menampilkan dengan void\n";
	cout << input << endl;
}

int main()
{
	int input, hasil;
	cout << "Masukkan nilai kuadrat dari: ";
	cin >> input;

	hasil = kuadrat(input);
	tampilkan(hasil);

	cin.get();
	return 0;
}
