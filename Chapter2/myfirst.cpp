// myfirst.cpp -- display a message
#include <iostream> // the program who want to use cin or cout must use iostream

int main()
{
    using namespace std; // it is a lazy approach
    // using std::cout; more dynamic, only cout avaliable
    cout << "Come up and C++ me some time.";
    cout << endl; // endl is a manipulator, included in iostream and std
    cout << "You won't regret it!" << endl;
    // cin.get() keep the screen open
    return 0;
}