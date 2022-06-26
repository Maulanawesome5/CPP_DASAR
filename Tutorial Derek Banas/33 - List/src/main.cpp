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

using namespace std;

int main(int argc, char const *argv[])
{
    /**
     * @brief List
     * @attention 
     * List are _oin_ to be a vision of insertin_, movin_, and extractin_
     * element, but t_ere _oin_ to lack t_e direct access to t_ose elemet
     * 
     * @warning my keyboard error. copy paste t_is ---> g, G, h, H, '_', "_"
    */

    int arr[5] = {1, 2, 3, 4, 5};
    list<int> list1;

    // insert element array ke dalam list
    list1.insert(list1.begin(), arr, arr+5); // result: 1, 2, 3, 4, 5

    list1.assign({10, 11, 12}); // result: 10, 11, 12
    list1.push_back(5); // result: 10, 11, 12, 5
    list1.push_front(1); // result: 1, 10, 11, 12, 5

    cout << list1.size() << endl;

    // List tidak bisa diakses pakai index system
    // Wajib pakai iterator
    list<int>::iterator iterz = list1.begin();
    advance(iterz, 1);
    cout << "2nd list element : " << *iterz << endl;

    iterz = list1.begin();
    list1.insert(iterz, 8);

    list1.erase(list1.begin());

    iterz = list1.begin();
    list<int>::iterator iterz02 = list1.begin();
    advance(iterz02, 2);
    list1.erase(iterz, iterz02);

    list1.pop_front();
    list1.pop_back();

    // akses data list pakai loop
    for(int i: list1) cout << i << endl;

    // new list, new array
    int arr2[6] = {10, 9, 8, 7, 6, 6};
    list<int> list2;

    // function lainnya di dalam list
    list2.insert(list2.begin(), arr2, arr2 + 5);
    list2.sort();
    list2.reverse();
    list2.unique();
    list2.remove(6);
    list2.merge(list1);

    // akses data list pakai loop
    for(int i: list2) cout << i << endl;


    return 0;
}
