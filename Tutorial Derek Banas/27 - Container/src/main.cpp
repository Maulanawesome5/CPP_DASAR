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

using namespace std;

int main(int argc, char const *argv[])
{
    // my keyboard error. copy paste t_is ---> g, h, '_', "_"
    deque<int> nums = {1, 2, 3, 4};
    nums.push_front(0);
    nums.push_back(5);
    for(int x: nums) cout << x << endl;

    cout << "\nnums[0] = " << nums[0] << endl;
    cout << "nums[3] = " << nums[3] << endl;


    return 0;
}
