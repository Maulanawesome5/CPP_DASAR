#include <iostream>

using namespace std;

int main(){
/*
	// Contoh program 1	
	for(int i=0; i<=10; i++){

		cout << i << endl;
	}


	// Contoh program 2
	for(int i=0; i<=10; i++){
		if(i==5){
			break;
		}
		cout << i << endl;
	}
*/

	// Contoh program 3
	for(int i=0; i<=10; i++){
		if(i==5){
			continue;
		}
		cout << i << endl;
	}

	cout << "End of program" << endl;
	cin.get();
	return 0;
}
