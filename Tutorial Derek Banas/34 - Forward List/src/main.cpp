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
     * @brief Forward List
     * @attention 
     * Basically like a List, but each item only has a link to the next item
     * in a list. And it has no way of getting to any item that preceeded.
     * And by or_anizin_ a list in t_is way makes t_em very quick sequence container.
     * 
     * @warning my keyboard error. copy paste t_is ---> g, G, h, H, '_', "_"
    */

    forward_list<int> forlist;

    // function di dalam forward list
    forlist.assign({1, 2, 3, 4});
    forlist.push_front(0);
    forlist.pop_front();
    cout << "Front Element : " << forlist.front() << endl; // result: 1

    // akses forward list pakai iterator
    forward_list<int>::iterator iterz = forlist.begin();
    iterz = forlist.insert_after(iterz, 5); // result: 1, 5, 2, 3, 4

    // function di dalam forward list
    forlist.emplace_front(6); // result: 6, 1, 5, 2, 3, 4
    forlist.remove(6); // result: 1, 5, 2, 3, 4

    forward_list<int> forlist2;
    forlist2.assign({9, 8, 7, 6, 6});
    forlist2.unique(); // lenyapkan number yan_ sama / duplikasi
    forlist2.sort();
    forlist2.reverse();
    forlist.merge(forlist2);

    for(int i: forlist) cout << i << endl;
    cout << endl;
    for(int i: forlist2) cout << i << endl;


    return 0;
}
