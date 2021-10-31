#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
	/*
		// Penulisan sintaks do while
		do{
			aksi;
		}while(syarat);
	*/

	int a = 1;
	do{
		cout << "Hore " << a << endl;
		a++;
	}while(a <= 10);

	return 0;
}