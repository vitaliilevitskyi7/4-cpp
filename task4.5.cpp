#include <iostream>

long long double_factorial(int n) {
    long long result = 1;
    // Крок циклу дорівнює 2, щоб множити лише парні або лише непарні числа
    for (int i = n; i > 0; i -= 2) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    std::cout << "Введіть натуральне число n: ";
    std::cin >> n;

    std::cout << n << "!! = " << double_factorial(n) << std::endl;
    return 0;
}
