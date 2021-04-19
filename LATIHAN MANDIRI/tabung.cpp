#include <iostream>

using namespace std;


int main(){
	float pi; // Phi 3.14
	int r2; // Jari-jari
	int t; // Tinggi

	pi = 3.14;
	r2 = 15;
	t = 40;

	int Volume;
	Volume = pi*r2*t;
	cout << "Volume tabung adalah : " << Volume << " cm3" << endl;

	cin.get();
	return 0;
}