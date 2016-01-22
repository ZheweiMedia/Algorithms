#include "array.cxx"
#include <iostream>

int main()
{
    Vector<int> a;
    std:: cout << a.insert(3) << std::endl;
    std::cout << a.size() << std::endl;
    std::cout << a.empty() << std::endl;
    return 0;
}
