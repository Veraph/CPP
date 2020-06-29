// read.cc -- read the unknown number of value
#include <iostream>

int main()
{
    using namespace std;

    int sum = 0, value = 0;
    // read value until the end of file and calculate the sum
    while (cin >> value) {
        sum += value;
    }
    cout << "Sum is: " << sum << endl;

    return 0;
}