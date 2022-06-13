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
     * @brief Array tutorial
     * @author Maulana Aji Wicaksono
     */

    int arrNum1[10] = {1};
    int arrNum2[] = {1, 2, 3};
    int arrNum3[5] = {8, 9};

    // cara akses array dengan index
    cout << "1st value : " << arrNum3[0] << endl;

    // mengubah nilai array dari index tertentu
    arrNum3[0] = 7;
    cout << "1st value : " << arrNum3[0] << endl;

    /* array multidimensi
     * arrNum4[layer][kolom][baris]
    */
    int arrNum4[2][2][2] = {
        {
            {1, 2}, {3, 4}
            },
        {
            {5, 6}, {7, 8}
            }
    };
    cout << "arrNum4[0][1][1] = " << arrNum4[0][1][1] << endl;

    return 0;
}
