#include <iostream>

int main() {
    float a = 1.0f;

    while (1.0f + (a / 2.0f) != 1.0f) {
        a /= 2.0f;
    }

    std::cout << "Машинний нуль для float вашого компілятора: " << a << std::endl;
    return 0;
}
