// 3_1.cpp the use of recursion
# include <iostream>
using namespace std;

unsigned fac(unsigned n) {
    if (n < 3)
        return n;
    else
        return n * fac(n - 1);
}

int main() {
    unsigned n = 0;
    cout << "Input the number you want to cal: " << endl;
    cin >> n;
    cout << fac(n) << endl;
    return 0;
}