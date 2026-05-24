#include <iostream>
#include <vector>

int main() {
    int n, m;
    std::cout << "Введіть два натуральних числа n та m: ";
    std::cin >> n >> m;

    // Отримуємо початковий залишок
    int remainder = n % m;

    // Масив для збереження позицій, на яких з'являлися залишкі.
    // Оскільки максимальний залишок може бути m-1, розмір беремо m.
    // Заповнюємо -1 (означає, що залишок ще не зустрічався).
    std::vector<int> remainder_positions(m, -1);

    int position = 0;
    int period_length = 0;

    while (remainder != 0) {
        // Якщо такий залишок уже зустрічався, ми знайшли період!
        if (remainder_positions[remainder] != -1) {
            period_length = position - remainder_positions[remainder];
            break;
        }

        // Запам'ятовуємо поточну позицію для цього залишку
        remainder_positions[remainder] = position;

        // Моделюємо ділення в стовпчик
        remainder *= 10;
        remainder %= m;
        position++;
    }

    std::cout << "Довжина періоду десяткового дробу " << n << "/" << m << " дорівнює: " << period_length << std::endl;

    return 0;
}
