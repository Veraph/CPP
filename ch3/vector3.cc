// vector3.cc -- final excercise for vector
#include <iostream>
#include <vector>
using std::vector; using std::cin; using std::cout; using std::endl;

int main()
{
    vector<int> nums;
    int num;
    // read and store those numbers
    while (cin >> num)
        nums.push_back(num);

    // calculate the neignbor sum
    int sum;
    cout << "The first answers are: " << endl;
    for (vector<int>::size_type n = 0; n != nums.size(); ++n) {
        sum = nums[n] + nums[n+1];
        cout << sum << " ";
    }
    cout << endl;

    // calculate the first and last
    cout << "The second answers are: " << endl;
    for (vector<int>::size_type m = 0; m != nums.size(); ++m) {
        sum = nums[m] + nums[nums.size() - 1 - m];
        cout << sum << " ";
    }
    cout << endl;
    return 0;   
}