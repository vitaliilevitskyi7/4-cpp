#include <iostream>

int main() {
    long long n;
    std::cout << "Введіть натуральне число n: ";
    std::cin >> n;

    long long power = 1;
    while (power <= n) {
        power *= 2;
    }

    std::cout << "Найменше число вигляду 2^r, що перевищує " << n << " це: " << power << std::endl;
    return 0;
}
