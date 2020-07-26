// swapptr.cc -- swap the pointers of two int
#include <iostream>

void swap(const int *& lhs, const int *& rhs)
{
    auto temp = lhs;
    lhs = rhs;
    rhs = temp;
}

int main()
{
    const int i = 1, j = 2;
    auto lhs = &i;
    auto rhs = &j;
    swap(lhs, rhs);
    std::cout << *lhs << " " << *rhs << std::endl;
}