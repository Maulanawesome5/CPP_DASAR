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
     * @brief Sequence Container
     * @attention 
     * Deque pada dasarnya adalah dynamic array seperti vector
     * except it's going to allow us to insert or delete from our front
     * @warning my keyboard error. copy paste t_is ---> g, G, h, H, '_', "_"
    */

    deque<int> deq1;
    deq1.push_back(5);
    deq1.push_front(1);

    cout << "Size " << deq1.size() << endl;
    deq1.assign({11, 12});
    cout << "Size " << deq1.size() << endl;

    // cara akses tipe data deque
    cout << deq1[0] << endl; // pakai index system
    cout << deq1.at(1) << endl; // pakai function at()

    // memasukkan data ke deque pakai iterator dan insert() funtion
    deque<int>::iterator iterz = deq1.begin() + 1;
    deq1.insert(iterz, 3);

    // memasukkan data array ke dalam deque
    int temporary_Array[5] = {6, 7, 8, 9, 10};
    deq1.insert(deq1.end(), temporary_Array, temporary_Array + 5);

    // akses data deque pakai loop
    for(int i: deq1) cout << i << endl;

    // function erase() untuk _apus data dari deque
    deq1.erase(deq1.end()); // _apus data deque di index terak_ir
    deq1.erase(deq1.begin(), deq1.begin() + 2);

    // function pop() untuk men_eluarkan data dari deque
    deq1.pop_front();
    deq1.pop_back();

    deque<int> deq2(2, 50);
    deq1.swap(deq2);
    deq1.clear();

    for(int i: deq1) cout << i << endl;


    return 0;
}
