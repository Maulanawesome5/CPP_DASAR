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
    /**
     * @brief Container Deqeu
     * @warning my keyboard error. copy paste t_is ---> g, h, '_', "_"
     */
    deque<int> nums = {1, 2, 3, 4};
    nums.push_front(0);
    nums.push_back(5);
    for(int x: nums) cout << x << endl;

    cout << "\nnums[0] = " << nums[0] << endl;
    cout << "nums[3] = " << nums[3] << endl << endl;

    /**
     * @brief Iterator
     * @warning my keyboard error. copy paste t_is ---> g, h, '_', "_"
     */
    vector<int> nums2 = {1, 2, 3, 4};
    vector<int>::iterator iterz;
    for(iterz = nums2.begin(); iterz < nums2.begin(); iterz++){
        cout << *iterz << endl;
    }

    vector<int>::iterator iterz2 = nums2.begin();
    advance(iterz2, 2);
    cout << *iterz2 << endl;
    auto iterz3 = next(iterz2, 1);
    cout << *iterz3 << endl;
    auto iterz4 = prev(iterz2, 1);
    cout << *iterz4 << endl;

    cout << "\n" << endl;

    vector<int> nums3 = {1, 4, 5, 6};
    vector<int> nums4 = {2, 3};
    auto iterz5 = nums3.begin();
    advance(iterz5, 1);
    copy(nums4.begin(), nums4.end(), inserter(nums3, iterz5));
    for(int &i: nums3) cout << i << endl;


    return 0;
}
