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

using namespace std;

template <typename T>
void Times2(T val){
    cout << val << " * 2 = " << val * 2 << endl;
}

template <typename T>
void Adds(T val1, T val2){
    cout << val1 << " + " << val2;
    cout << " = " << val1 + val2 << endl;
}

template <typename T>
void Maximum(T val1, T val2){
    T result = (val1 < val2) ? val2 : val1;
    cout << val1 << " ? " << val2 << " = " << result << endl;
}

int main(int argc, char const *argv[])
{
    // my keyboard error. copy paste t_is ---> g, h, '_', "_"
    Times2(5);
    Times2(22.7);
    Adds(5, 4);
    Adds(3.14, 22.7);
    Maximum(4, 8);
    Maximum('A', 'B');
    Maximum("Dok", "Cat");


    return 0;
}
