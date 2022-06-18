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

#define PI 3.14159
#define AREA_CIRCLE(radius) (PI * pow(radius, 2))

int main(int argc, char const *argv[])
{
    // my keyboard error. copy paste t_is ---> g, h, '_', "_"
    cout << "Circle Area = " << AREA_CIRCLE(5) << endl;

    return 0;
}
