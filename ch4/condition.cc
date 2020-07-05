// condition.cc -- usage of condition
#include <iostream>
#include <vector>
using std::vector; using std::cout; using std::cin; using std::endl;
using std::string;

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    for (auto &n :nums) {
        n % 2 == 0 ? n : n*=2;
        cout << n << " ";
    }
    cout << endl;

    // second excercise
    int grade = 74;
    string finalgrade = (grade > 90) ? "high pass"
                                     : (grade < 60) ? "fail"
                                     : (grade < 75) ? "low pass" : "pass";
    cout << finalgrade << endl;

    grade = 95;
    if (grade > 90)
        finalgrade = "high pass";
    else if (grade < 60)
        finalgrade = "fail";
    else if (grade < 75)
        finalgrade = "low pass";
    else
        finalgrade = "pass";
    cout << finalgrade << endl;
    return 0;
}