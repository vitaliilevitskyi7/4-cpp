#include <iostream>
#include <cmath>

// а) y = x^n + x^(n-1) + ... + x^2 + x + 1
double poly_a(int n, double x) {
    double sum = 0;
    for (int i = 0; i <= n; ++i) {
        sum += std::pow(x, i);
    }
    return sum;
}

// б) y = x^n * y^0 + x^(n-1) * y^1 + ... + x^1 * y^(n-1) + y^n
double poly_b(int n, double x, double y_val) {
    double sum = 0;
    for (int i = 0; i <= n; ++i) {
        sum += std::pow(x, n - i) * std::pow(y_val, i);
    }
    return sum;
}

int main() {
    // Тест а) n = 3, x = 2
    std::cout << "а) Результат: " << poly_a(3, 2.0) << "\n";

    // Тест б) n = 4, x = 1, y = 2
    std::cout << "б) Результат: " << poly_b(4, 1.0, 2.0) << "\n";

    return 0;
}
