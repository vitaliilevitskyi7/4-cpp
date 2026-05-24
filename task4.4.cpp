#include <iostream>
#include <cmath>

int main() {
    int n;
    double x;
    std::cout << "Введіть натуральне число n та дійсне x: ";
    std::cin >> n >> x;

    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i * std::pow(x, i);
    }

    std::cout << "Значення виразу: " << sum << std::endl;
    return 0;
}
