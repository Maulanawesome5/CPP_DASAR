#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

using namespace std;

int imGlobal = 0;
const double PI = 3.14;

int main(int argc, char const *argv[])
{
    bool married = true;
    char myGrade = 'A';

    cout << "Min unsigned short int " << numeric_limits<unsigned short int>::min() << endl;
    cout << "Max unsigned short int " << numeric_limits<unsigned short int>::max() << endl;
    cout << "Min short int " << numeric_limits<short int>::min() << endl;
    cout << "Max short int " << numeric_limits<short int>::max() << endl;
    cout << "Min int " << numeric_limits<int>::min() << endl;
    cout << "Max int " << numeric_limits<int>::max() << endl;
    cout << "Min long " << numeric_limits<long>::min() << endl;
    cout << "Max long " << numeric_limits<long>::max() << endl;

    return 0;
}
