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
     * @brief Container Adapter (queue)
     * @attention 
     * 
     * 
     * @warning my keyboard error. copy paste this ---> g, G, h, H, '_', "_"
    */

    queue<string> person;

    person.push("Jason");
    person.push("Borris");
    person.push("Lisa");

    int size = person.size();
    if(!person.empty()){
        for(int i = 0; i < size; i++){
            cout << person.front() << endl;
            person.pop();
        }
    }

    return 0;
}
