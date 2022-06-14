#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

using namespace std;

double AddNumbers(double num1, double num2);
void AssignAge(int* ptrAge);
void DoubleArray(int *arr, int size);

int main(int argc, char const *argv[])
{
    /**
     * @brief Function
     * @author Maulana Aji Wicaksono
     * @attention membuat custom function dan pointer
    */

    int age2 = 43;
    int* ptrAge = NULL;
    ptrAge = &age2;
    cout << "Address : " << ptrAge << endl;
    cout << "value   : " << *ptrAge << endl;

    // pointer for array
    int intArray[] = {1, 2, 3, 4};
    int* ptrIntArray = intArray;
    cout << "1st " << ptrIntArray << endl;
    ptrIntArray++;
    cout << "2nd " << ptrIntArray << endl;

    DoubleArray(intArray, 4);
    for(int i = 0; i < 4; ++i){
        cout << "Array " << intArray[i] << endl;
    }

    return 0;
}

double AddNumbers(double num1 = 0, double num2 = 0){
    return num1 + num2;
}

void AssignAge(int* ptrAge){
    *ptrAge = 24;
}

void DoubleArray(int *arr, int size){
    for(int i = 0; i < size; ++i){
        arr[i] = arr[i] * 2;
    }
}
