// array1.cc -- intro of array
#include <iostream>
#include <vector>
using std::cout; using std::endl;
using std::vector;

int main()
{
    // using arrary
    // remember to initialize arrary if it is use the insideclass inside a
    // function.
    int nums[10] = {};
    int index = 0;
    for (auto &n : nums) {
        n = index;
        ++index;
        cout << n << " ";
    }
    cout << endl;

    // using vector, can use the better method iterator
    vector<int> nums1(10);
    int index1 = 0;
    for (auto &n1 : nums1) {
        n1 = index1;
        ++index1;
        cout << n1 << " ";
    }
    cout << endl;
    return 0;
}