#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "Masukkan panjang pola: ";
	cin >> n;

	cout << " Pola 1\n";

	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			cout << "x";	
		}
		cout << endl;
	}
	
	cout << "\n Pola 2\n";

	for(int i=1; i<=n; i++){
		for(int j=n; j>=i; j--){
			cout << "x";	
		}
		cout << endl;
	}

	cout << "\n Pola 3\n";

	for(int i=1; i<=n; i++){
		for(int j=1; j<i; j++){
			cout << " ";	
		}
		for(int k=n; k>=i; k--){
			cout << "x";
		}
		cout << endl;
	}

	cout << "\n Pola 4\n";

	for(int i=1; i<=n; i++){
		for(int j=n; j>i; j--){
			cout << " ";	
		}
		for(int k=1; k<=i; k++){
			cout << "x";
		}
		cout << endl;
	}

	cin.get();
	return 0;
}
