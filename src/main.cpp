#include <iostream>
#include "mylib.h"

int add(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    std::cin >> x >> y;
    std::cout << "The sum of " << x << " and " << y << " is: " << add(x, y) << std::endl;
    return 0;
}