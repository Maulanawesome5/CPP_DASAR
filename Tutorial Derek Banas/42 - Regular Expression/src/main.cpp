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
#include <regex>

using namespace std;

int main(int argc, char const *argv[])
{
    /**
     * @brief Regular Expression (Regex)
     * @attention 
     * Dipakai untuk proses searching pada suatu data yang bertipe string.
     * Regex akan mencari potongan kata yang sama pada kalimat yang berbeda.
     * Berbeda dengan substring yang mencari potongan kata dari 
     * index yang paling awal ditemukan, Regex akan menampilkan semua pencariannya yang sesuai
     * 
     * @warning my keyboard error. copy paste this ---> g, G, h, H, '_', "_"
    */

    string str = "The ape was at the apex";
    regex reg ("(ape)[^ ]?");
    smatch matches;

    if(regex_search(str, matches, reg) == true)
    {
        cout << matches.size() << " cocok" << endl;
        while(regex_search(str, matches, reg))
        {
            cout << matches.str(1) << endl;
            cout << "At index " << matches.position(1) << endl;
            str = matches.suffix().str();
        }
    }

    return 0;
}
