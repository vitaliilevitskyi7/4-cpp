#include <iostream>

int main() {
    long long m;
    std::cout << "Введіть ціле m (m >= 1): ";
    std::cin >> m;

    int k = 0;
    long long power = 1;

    while (power * 4 <= m) {
        power *= 4;
        k++;
    }

    std::cout << "Найбільше ціле k = " << k << " (4^" << k << " = " << power << " <= " << m << ")\n";
    return 0;
}
