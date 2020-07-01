// iterator3.cc -- read a group of num and calculate
#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl; using std::vector;

int main()
{
    // read the group of numbers
    vector<int> nums;
    int num;
    while (cin >> num)
        nums.push_back(num);
    
    // initialize 
    int sum;
    auto ite = nums.end() - 1;
    auto itb = nums.begin();
    // calculate 1th
    // itb changed in this loop
    for (itb; itb != ite; ++itb) {
        sum = *itb + *(itb+1);
        cout << sum << " ";
    }
    cout << endl;

    // reinitialize calculate 2th
    itb = nums.begin();
    for (itb, ite; itb < ite; ++itb, --ite) {
        sum = *itb + *ite;
        cout << sum << " ";
    }
    cout << endl;
    return 0;
}