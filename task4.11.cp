#include <iostream>
#include <cmath>

int main() {
    double val, sum = 0;
    int i = 0;
    
    std::cout << "Введіть послідовність дійсних чисел (для завершення натисніть Ctrl+Z або введіть букву):\n";
    while (true) {
        std::cout << "a[" << i << "]=";
        if (!(std::cin >> val)) break;
        sum += val;
        i++;
    }
    std::cout << "Сума введених чисел: " << sum << "\n\n";

    // Очищення потоку введення для другої частини завдання
    std::cin.clear();
    std::string dummy;
    std::cin >> dummy;

    std::cout << "Введіть послідовність цілих ненульових чисел (0 - кінець):\n";
    long long geom_prod = 1;
    double ari_sum = 0;
    int count = 0;

    while (std::cin >> val && val != 0) {
        ari_sum += val;
        geom_prod *= val;
        count++;
    }

    if (count > 0) {
        std::cout << "Середнє арифметичне: " << ari_sum / count << "\n";
        std::cout << "Середнє геометричне: " << std::pow(geom_prod, 1.0 / count) << "\n";
    } else {
        std::cout << "Послідовність порожня.\n";
    }

    return 0;
}
