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
#include <thread>
#include <chrono>
#include <mutex>
#include <list>
#include <forward_list>
#include <set>

using namespace std;

int main(int argc, char const *argv[])
{
    /**
     * @brief Multi Sets
     * @attention 
     * Basically a multi sets is just _oin to store duplicate value in a
     * sorted order
     * 
     * @warning my keyboard error. copy paste this ---> g, G, h, H, '_', "_"
    */

    multiset<int> mset1 = {1, 2, 3, 4};
    mset1.insert(4);
    mset1.insert(0);
    if(!mset1.empty()){
        for(int i : mset1) cout << i << endl;
    }


    return 0;
}
