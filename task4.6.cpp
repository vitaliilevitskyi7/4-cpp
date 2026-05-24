#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cout << "Введіть натуральне n: ";
    std::cin >> n;

    // а) Однорідний корінь з двійок (рахуємо знизу вгору)
    double res_a = 0;
    for (int i = 0; i < n; ++i) {
        res_a = std::sqrt(2.0 + res_a);
    }
    std::cout << "а) Результат: " << res_a << "\n";

    // б) Корінь із послідовних трійок (знизу вгору: від n до 1)
    double res_b = 0;
    for (int i = n; i >= 1; --i) {
        res_b = std::sqrt(3.0 * i + res_b);
    }
    std::cout << "б) Результат: " << res_b << "\n";

    return 0;
}
