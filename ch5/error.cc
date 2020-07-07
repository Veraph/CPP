// error.cc -- things about error
#include <iostream>
#include <stdexcept>
using std::cin; using std::cout; using std::endl;

int main()
{
    int a, b;
    cin >> a >> b;
    if (b == 0)
        throw std::runtime_error("division is 0");
    cout << a / b << endl;
    return 0;
}