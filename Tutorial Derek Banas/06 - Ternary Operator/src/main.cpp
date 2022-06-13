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
     * @brief Ternary Operator
     * @author Maulana Aji Wicaksono
     */

    int umur = 23;
    bool canIVote = (umur >= 18) ? true : false;
    cout.setf(ios::boolalpha); // ini supaya true dan false tidak ditampilkan 1 dan 0
    cout << "Can i vote election ? " << canIVote << endl;

    return 0;
}
