#include <iostream>

// Рекурсивна функція для обчислення кінцевої суми
int calculateSum(int n) {
    // Базовий випадок: сума для n=1 дорівнює 1
    if (n == 1) {
        return 1;
    } else {
        // Рекурсивний виклик: сума для n дорівнює n плюс сума для (n-1)
        return n + calculateSum(n - 1);
    }
}

int main() {
    // Введення значення n
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    // Обчислення та вивід кінцевої суми
    int result = calculateSum(n);
    std::cout << "Sum of the first " << n << " natural numbers is: " << result << std::endl;

    return 0;
}
