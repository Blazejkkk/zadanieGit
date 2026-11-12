#include <iostream>

int Policz(int a, int b) {
    return a + b;
}

int main() {
    auto pomnoz = [](int a, int b){ return a * b; };

    std::cout << "W drugim branchu; 2 * 3 = " << pomnoz(2, 3) << std::endl;
    std::cout << "Hello, World!" << std::endl;
    std::cout << "W pierwszym branchu; 2 + 3 = " << Policz(2, 3) << std::endl;
    return 0;
}

