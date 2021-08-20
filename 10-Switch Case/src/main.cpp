#include <iostream>

using namespace std;

int main(){
	int a;

	cout << "Masukkan nilai a = ";
	cin >> a;
/*
// ================ Program testing ================
	switch(a == 5){
		case true:
			cout << "Benar, nilainya 5" << endl;
	}
*/

// ================ Program utama ================
	switch(a){
		case 1:
			cout << "Benar itu adalah 1" << endl;
			break;
		case 2:
			cout << "Benar itu adalah 2" << endl;
		case 3:
			cout << "Benar itu adalah 3" << endl;
		case 4:
			cout << "Benar itu adalah 4" << endl;
		case 5:
			cout << "Benar itu adalah 5" << endl;
		default:
			cout << "default" << endl;
	}

	cout << "## End of program ##" << endl;
	return 0;
}
