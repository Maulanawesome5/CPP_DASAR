#include <iostream>
#include <cstdlib> //Terdapat fungsi untuk random

using namespace std;

int main()
{
/*	
	// Dummy program
	for(int i = 0; i < 10; i++){
		cout << 1 + (rand() % 6) << endl;
	}
*/
	char lanjut;
	while( true){
		cout << "Lempar dadu: (y/n)";
		cin >> lanjut;

		if(lanjut == 'y'){
			cout << 1 + (rand() % 6) << endl;
		}else if(lanjut == 'n'){
			break;
		}else{
			cout << "Warning : ketik 'y' atau 'n' saja bro!\n";
		}
	}
	


	cin.get();
	return 0;
}