#include <iostream>
#include <cmath>

int main() {
    double x;
    int n;
    std::cout << "Введіть дійсне число x та натуральне n: ";
    std::cin >> x >> n;

    double y = x;
    for (int i = 0; i < n; ++i) {
        y = std::sin(y);
    }

    std::cout << "Результат y = " << y << std::endl;
    return 0;
}
