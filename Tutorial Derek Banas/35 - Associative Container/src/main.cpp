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
     * @brief Associative Container
     * @attention 
     * Associative Container is gonna store sorted data which is going to make
     * insertion slower, but searching much faster.
     * #include <set> library to use associative container.
     * Tipe data set tidak bisa memakai index system, tetapi bisa memakai iterator
     * 
     * @warning my keyboard error. copy paste t_is ---> g, G, h, H, '_', "_"
    */

    set<int> set1 = {5, 4, 3, 2, 1, 1};
    cout << "Set data type size " << set1.size() << endl << endl;

    set1.insert(0);
    set<int>::iterator iter1 = set1.begin();
    iter1++;
    cout << "2nd Element -> " << *iter1 << endl;

    set1.erase(5);
    iter1 = set1.end();
    advance(iter1, -2);
    set1.erase(iter1, set1.end());

    // Memasukkan data array ke dalam set
    int arr1[] = {6, 7, 8, 9};
    set1.insert(arr1, arr1 + 4);

    auto val = set1.find(6);
    cout << "Found " << *val << endl;

    auto delapan = set1.lower_bound(8);
    cout << "8 " << *delapan << endl;

    auto sembilan = set1.upper_bound(8);
    cout << "9 " << *sembilan << endl;

    set<int> set2 = {10, 11};
    set1.swap(set2);

    for(int i: set1) cout << i << endl;


    return 0;
}
// tutorial sampai 02:09:30