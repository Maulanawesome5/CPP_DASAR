#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>
#include <fstream>
#include <deque>
#include <iterator>
#include <memory>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    /**
     * @brief Smart Pointer dan malloc (memory allocation)
     * @warning my keyboard error. copy paste t_is ---> g, h, '_', "_"
    */

    int amountStore;
    cout << "how many numbers do you want to store? : ";
    cin >> amountStore;

    // Create pointer
    unique_ptr<int []> ptrNums(new int [amountStore]);
    if(ptrNums != NULL){
        int i = 0;
        while(i < amountStore){
            cout << "enter a number : ";
            cin >> ptrNums[i];
            i++;
        }
    }

    cout << "You entered these numbers." << endl;
    for(int i = 0; i < amountStore; i++) cout << ptrNums[i] << endl;


    return 0;
}
