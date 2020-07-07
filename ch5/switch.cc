// switch.cc -- use of switch
#include <iostream>
using std::string; using std::cout; using std::cin; using std::endl;

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, otherCnt = 0;
    char ch;
    while (cin >> ch) {
        switch (ch) {
            case 'a':
            case 'A':
                ++aCnt;
                break;
            case 'e':
                ++eCnt;
                break;
            case 'i':
                ++iCnt;
                break;
            case 'o':
                ++oCnt;
                break;
            case 'u':
                ++uCnt;
                break;
            default:
                ++otherCnt;
                break;
        }
    }
    cout << "Number of a: " << aCnt << '\n'
         << "Number of e: " << eCnt << '\n'
         << "Number of i: " << iCnt << '\n'
         << "Number of o: " << oCnt << '\n'
         << "Number of u: " << uCnt << '\n'
         << "Number of other: " << otherCnt << endl;

    return 0;
}