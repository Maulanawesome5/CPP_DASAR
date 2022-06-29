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

using namespace std;

int main(int argc, char const *argv[])
{
    /**
     * @brief Maps
     * @attention 
     * Untuk menyimpan data berupa pasan_an key dan value, dimana untuk key
     * tidak bisa sama atau duplikat. Nilai bisa sama, namun key selalu unik.
     * 
     * @warning my keyboard error. copy paste this ---> g, G, h, H, '_', "_"
    */

    map<int, string> map1;

    map1.insert(pair<int, string> (1, "Bart"));
    map1.insert(pair<int, string> (2, "Lisa"));
    map1.insert(pair<int, string> (3, "Maria"));
    map1.insert(pair<int, string> (4, "Borris"));

    auto result = map1.find(1); // mencari data pada key 1
    cout << result->second << endl;

    auto person1 = map1.lower_bound(1);
    cout << "Lower Bound -> " << person1->second << endl;
    auto person2 = map1.upper_bound(1);
    cout << "Upper Bound -> " << person2->second << endl;

    // Akses data map pakai iterator
    map<int, string>::iterator iterz;
    for(iterz = map1.begin(); iterz != map1.end(); ++iterz){
        cout << "Key " << iterz->first; // first untuk akses key-nya
        cout << " Value " << iterz->second << endl; // second untuk akses value-nya
    }

    return 0;
}
