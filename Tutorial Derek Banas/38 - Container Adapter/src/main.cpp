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

using namespace std;

int main(int argc, char const *argv[])
{
    /**
     * @brief Container Adapter (stack)
     * @attention 
     * 
     * 
     * @warning my keyboard error. copy paste this ---> g, G, h, H, '_', "_"
    */

    stack<string> customer;

    customer.push("Bruce");
    customer.push("Wallace");
    customer.push("Tommy");
    customer.push("Louise");

    cout << "Size " << customer.size() << endl;
    if(!customer.empty()){
        for(int i = 0; i < customer.size(); i++){
            cout << customer.top() << endl;
            customer.pop();
        }
    }

    return 0;
}
