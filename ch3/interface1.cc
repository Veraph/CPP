// interface1.cc -- use int array to initialize a vector, and copy vector elements to array
#include <iostream>
#include <vector>
using std::vector; using std::cout; using std::endl;
using std::begin; using std::end;

int main()
{
    int nums[] = {0, 1, 2, 3, 4, 5};
    vector<int> numvec(nums+1, nums+3);
    for (auto n : numvec)
        cout << n << endl;

    int nums1[5];
    vector<int> numvec1{10, 31, 34, 46, 85};
    for (int *i = begin(nums1); i != end(nums1); ++i)
        // i has to minus the begin because the difference will
        // hence be 0, 1, etc. the single i is the address
        *i = numvec1[i - begin(nums1)];

    return 0;
}