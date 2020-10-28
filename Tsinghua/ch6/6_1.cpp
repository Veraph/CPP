// 6_1.cpp pointer
# include <iostream>
using namespace std;

int main(){
    int i = 5;
    void *ptr;
    ptr = &i;
    int *pint = static_cast <int*> (ptr);
    cout << sizeof(ptr) << endl;
    cout << sizeof(*pint) << endl;
    cout << sizeof(pint) << endl;
    return 0;
}