#include <iostream>

int main() {
    double x;
    int n;
    std::cout << "Введіть дійсне x (|x| < 1) та n >= 0: ";
    std::cin >> x >> n;

    double sum = 1.0;
    double term = 1.0;

    for (int i = 1; i <= n; ++i) {
        term *= (x / i); // Доданок x^i / i!
        sum += term;
    }

    std::cout << "y = " << sum << std::endl;
    return 0;
}
