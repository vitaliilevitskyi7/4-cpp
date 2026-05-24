#include <iostream>

int main() {
    int n;
    std::cout << "Введіть натуральне число n: ";
    std::cin >> n;

    // а) Цикл по діапазону зі зростанням
    std::cout << "n! = ";
    for (int i = 1; i <= n; ++i) {
        std::cout << i;
        if (i < n) std::cout << "*";
    }
    std::cout << "\n";

    // б) Цикл по діапазону зі спаданням
    std::cout << "n! = ";
    for (int i = n; i >= 1; --i) {
        std::cout << i;
        if (i > 1) std::cout << "*";
    }
    std::cout << "\n";

    return 0;
}
