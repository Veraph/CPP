// iterator4.cc -- write the marks adder
#include <iostream>
#include <vector>
using std::vector; using std::cin; using std::cout; using std::endl;

int main()
{
    vector<unsigned> scores(11, 0);
    unsigned grade;
    auto it = scores.begin();
    while (cin >> grade) {
        if (grade <= 100)
            ++*(it+grade/10);
    }
    
    for (it; it != scores.end(); ++it)
        cout << *it << " ";
    
    cout << endl;
    return 0;
}