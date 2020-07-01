// binary.cc -- use iterator to write binary algorithm
#include <iostream>
#include <vector>
using std::vector; using std::cout; using std::endl;

int main()
{
    // the nums must be sorted!
    vector<int> nums{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sought = 7;
    
    // initialize begin, end and mid points
    auto beg = nums.begin(), end = nums.end();
    auto mid = beg + (end - beg) / 2;

    // find
    // first check whether the vector is empty
    // and check whether the mid point is the sought
    while (mid != end && *mid != sought) {
        if (sought < *mid)
            end = mid;
        else
            beg = mid + 1;
        mid = beg + (end - beg) / 2;
    }
}
