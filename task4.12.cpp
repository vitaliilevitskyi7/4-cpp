#include <iostream>

int main() {
    int n;
    std::cout << "Введіть натуральне число n (n < 25): ";
    std::cin >> n;

    long long sub_fact = 1; // !0 = 1
    long long sign = 1;     // Початковий знак для (-1)^i

    for (int i = 1; i <= n; ++i) {
        sign = (i % 2 == 0) ? 1 : -1;
        sub_fact = i * sub_fact + sign;
    }

    std::cout << "Субфакторіал !" << n << " = " << sub_fact << std::endl;
    return 0;
}
