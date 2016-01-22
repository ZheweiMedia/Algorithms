#include <iostream>

int main() {
    int a=3, b=5;
    int *pa = &a, *pb = &b;
    int &qa = a;
    
    std::cout << qa << std::endl;
    return 0;
}

