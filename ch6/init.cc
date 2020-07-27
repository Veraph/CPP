// init.cc -- using the initializer_list<>
#include <iostream>
#include <initializer_list>

int sum(const std::initializer_list<int> &num)
{
    int sum = 0;
    for (auto i : num)
        sum += i;
    return sum;
}

int main()
{
    std::cout << sum({1, 2, 3, 4, 5, 6, 7, 8, 9, 0}) << std::endl;
    return 0;
}