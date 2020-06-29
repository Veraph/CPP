// while.cc -- example of while loop
#include <iostream>

int main()
{
    using namespace std;

    int sum = 0, val = 50, num = 10;

    // print 10 to 0
    while (num > 0) {
        cout << num << endl;
        --num;
    }
    
    // calculate the sum of 50 to 100
    while (val <= 100) {
        sum += val;
        ++val; // add val 1, like val++
    }
    cout << "sum of 50 to 100 inclusive is "
         << sum << endl;

    // ask for two number and print the scale
    int v1 = 0, v2 = 0;
    cout << "Please give me two numbers: ";
    cin >> v1 >> v2;
    while (v1 <= v2) {
        cout << v1 << endl;
        ++v1;
    } 

    return 0;
}
