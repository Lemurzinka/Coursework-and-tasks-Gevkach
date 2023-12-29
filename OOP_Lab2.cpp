#include <iostream>

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            std::cout << "Помилка: Ділення на нуль!" << std::endl;
            return 0.0;
        }
    }
};

int main() {
    Calculator calc;

    int num1 = 10;
    int num2 = 5;

    int sum = calc.add(num1, num2);
    int difference = calc.subtract(num1, num2);
    int product = calc.multiply(num1, num2);
    double quotient = calc.divide(num1, num2);

    std::cout << "Сума: " << sum << std::endl;
    std::cout << "Різниця: " << difference << std::endl;
    std::cout << "Добуток: " << product << std::endl;
    std::cout << "Частка: " << quotient << std::endl;

    return 0;
}
