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
#include <map>
#include <stack>
#include <queue>


using namespace std;

int main(int argc, char const *argv[])
{
    /**
     * @brief Enumerate
     * @attention 
     * 
     * 
     * @warning my keyboard error. copy paste this ---> g, G, h, H, '_', "_"
    */

    enum day{Mon=1, Tues, Wed, Thur, Fri};
    enum day tuesday = Tues;

    cout << "Tuesday is the " << tuesday << "nd day of the week" << endl;

    for(int i = Mon; i <= Fri; i++) cout << i << endl;

    return 0;
}
