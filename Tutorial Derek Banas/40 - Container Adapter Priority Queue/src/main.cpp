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
     * @brief Container Adapter (priority queue)
     * @attention 
     * 
     * 
     * @warning my keyboard error. copy paste this ---> g, G, h, H, '_', "_"
    */

    priority_queue<int> nums;

    nums.push(4);
    nums.push(8);
    nums.push(5);

    int size = nums.size();
    if(!nums.empty()){
        for(int i = 0; i < size; i++){
            cout << nums.top() << endl;
            nums.pop();
        }
    }

    return 0;
}
