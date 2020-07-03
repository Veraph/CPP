// cstyle2.cc -- define two string, and create a third one includes both
#include <iostream>
#include <cstring>

using std::cout; using std::endl;

int main()
{
    const char a1[] = "Hello,";
    const char a2[] = "World!";
    // calculate the length we needed
    size_t size = strlen(a1) + strlen(" ") + strlen(a2);
    // create a pointer to the first element of the new list
    char *a3 = new char[size];
    strcpy(a3, a1); strcat(a3, " "); strcat(a3, a2);

    cout << a3 << endl;
    return 0;
    
}