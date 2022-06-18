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

vector<int>generateRandomVect(int numOfNums, int min, int max);

int main(int argc, char const *argv[])
{
    /**
     * @brief Lambda Expression
     * @author Maulana Aji Wicaksono
     * @attention Belajar lambda expression, untuk menghasilkan
     * nilai vector random.
     * @warning my keyboard error. copy paste -> g, h, '_', "_"
    */

    vector<int> vecVals = generateRandomVect(10, 1, 50);
    vector<int> evenVecVals;
    (vecVals.begin(), vecVals.end(), [](int x, int y){
        return x < y;
    });
    for(auto val: vecVals) cout << val << endl;

    // random vector bilangan genap
    (vecVals.begin(), vecVals.end(), back_inserter(evenVecVals), [](int x){
        return (x % 2) == 0;
    });
    for(auto val: evenVecVals) cout << val << endl;


    return 0;
}

vector<int>generateRandomVect(int numOfNums, int min, int max){
    vector<int> vecValues;
    srand(time(NULL));
    int i = 0, randVal = 0;

    while (i < numOfNums){
        randVal = min + rand() % ((max + 1) - min);
        vecValues.push_back(randVal);
        i++;
    }
    return vecValues;
}
