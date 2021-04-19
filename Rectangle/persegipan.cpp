#include <iostream>
using namespace std;

// Fungsi menghitung luas persegi panjang
double hitung_luas(double p, double l){
	double luas = p * l;
	return luas;
}

// Fungsi menghitung keliling persegi panjang
double hitung_keliling(double p, double l){
	double keliling = 2 * (p + l);
	return keliling;
}

// Menggunakan void untuk memanggil fungsi luas dan keliling
void tampilkan_luas(double p, double l){
	cout << "( Menggunakan void )\n";
	cout << "Luasnya adalah: ";
	cout << hitung_luas(p,l) << endl;
}

void tampilkan_keliling(double p, double l){
	cout << "( Menggunakan void )\n";
	cout << "Kelilingnya adalah: ";
	cout << hitung_keliling(p,l) << endl;
}

int main(int argc, char const *argv[])
{
	double panjang, lebar;
	cout << "Panjang: ";
	cin >> panjang;
	cout << "Lebar: ";
	cin >> lebar;
/*
	// Menampilkan hasil tanpa fungsi void
	cout << "Luasnya adalah: ";
	cout << hitung_luas(panjang,lebar) << endl;
	cout << "keliling adalah: ";
	cout << hitung_keliling(panjang,lebar) << endl;
*/
	// Menampilkan hasil menggunakan void
	tampilkan_luas(panjang, lebar);
	tampilkan_keliling(panjang, lebar);
	
	cin.get();
	return 0;
}
