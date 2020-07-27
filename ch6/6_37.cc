// 6_37.cc -- return arrary's references and pointer
#include <iostream>
#include <string>
using std::string;

// method1
using ArrT = string[10];
ArrT &func1(ArrT &arr);

// method2
auto func2(ArrT &arr) -> string(&) [10];

// method3
string arrS[10];
decltype(arrS)& func3(ArrT &arr);