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
    /**
     * @brief While loop
     * @author Maulana Aji Wicaksono
     */

    int i = 1;
    while (i <= 20){
        if ((i % 2) == 0){
            i += 1;
            continue;
        }
        if (i == 15) break;
        cout << i << endl;
        i += 1;
    }


    return 0;
}
