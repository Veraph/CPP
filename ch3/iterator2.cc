// iterator2.cc -- the multiply excercise
#include <iostream>
#include <vector>
using std::cout; using std::endl; using std::vector;

int main()
{
    vector<int> nums{1, 2, 3, 4, 5, 6, 7, 8};
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        *it = *it * 2;
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}