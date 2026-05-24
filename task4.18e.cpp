#include <iostream>

int main() {
    double x;
    int n;
    std::cout << "Введіть дійсне число x: ";
    std::cin >> x;
    std::cout << "Введіть кількість елементів n (n >= 0): ";
    std::cin >> n;

    // Початковий елемент для k = 0: x_0 = ( (-1)^0 * x^0 ) / 0! = 1
    double current_term = 1.0;
    
    std::cout << "k = 0: " << current_term << "\n";

    // Обчислення наступних елементів через рекурентну формулу
    for (int k = 1; k <= n; ++k) {
        // Коефіцієнт переходу: (-x * x) / ((2 * k - 1) * (2 * k))
        double factor = (-x * x) / ((2 * k - 1) * (2 * k));
        current_term *= factor;
        
        std::cout << "k = " << k << ": " << current_term << "\n";
    }

    return 0;
}
