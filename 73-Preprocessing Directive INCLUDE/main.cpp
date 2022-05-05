#include <iostream>

#include "library.h" // eksternal file

using namespace std;

int main()
{
    /* include eksternal file */
    // #include "library.h"

    cout << "PI = " << PI << endl;
    cout << "Pangkat = " << PANGKAT(5) << endl;
    cout << "Maximum = " << MAX(20, 5) << endl;

    cin.get();
    return 0;
}
