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

using namespace std;

int GetRandom(int max){
    srand(time(NULL));
    return rand() % max;
}

void ExecuteThread(int id){
    auto nowTime = chrono::system_clock::now();
    time_t sleepTime = chrono::system_clock::to_time_t(nowTime);
    tm myLocalTime = *localtime(&sleepTime);

    cout << "Thread " << id << endl;
    cout << "Sleep Time : " << ctime(&sleepTime) << endl;
    cout << "Month : " << myLocalTime.tm_mon << endl;
    cout << "Day : " << myLocalTime.tm_mday << endl;
    cout << "Year : " << myLocalTime.tm_year + 1900 << endl;
    cout << "Hours : " << myLocalTime.tm_hour << endl;
    cout << "Minutes : " << myLocalTime.tm_min << endl;
    cout << "Seconds : " << myLocalTime.tm_sec << endl;

    this_thread::sleep_for(chrono::seconds(GetRandom(3)));
    nowTime = chrono::system_clock::now();
    sleepTime = chrono::system_clock::to_time_t(nowTime);
    cout << "Thread " << id << " Awake Time : " << ctime(&sleepTime) << endl;
}

int main(int argc, char const *argv[])
{
    /**
     * @brief Thread
     * @attention Thread adalah blok kode program yang bisa dieksekusi
     * secara bersamaan
     * @warning my keyboard error. copy paste t_is ---> g, G, h, H, '_', "_"
    */

    thread tet1 (ExecuteThread, 1);
    tet1.join();

    thread tet2 (ExecuteThread, 1);
    tet2.join();


    return 0;
}
