#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>

int main() {
    std::vector<int> numbers = {5, 2, 8, 1, 9, 3};

    // Використання алгоритму STL для сортування вектору у зворотному порядку
    std::sort(numbers.rbegin(), numbers.rend());

    // Виведення відсортованого вектору на екран за допомогою ітератора та алгоритму STL
    std::cout << "Sorted numbers in descending order: ";
    std::copy(numbers.begin(), numbers.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    // Використання алгоритму STL для пошуку максимального елемента у векторі
    int maxElement = *std::max_element(numbers.begin(), numbers.end());

    // Виведення максимального елемента на екран
    std::cout << "Maximum element: " << maxElement << std::endl;

    // Використання алгоритму STL для видалення всіх парних чисел з вектору
    numbers.erase(std::remove_if(numbers.begin(), numbers.end(), [](int num) { return num % 2 == 0; }), numbers.end());

    // Виведення оновленого вектору на екран
    std::cout << "Vector after removing even numbers: ";
    std::copy(numbers.begin(), numbers.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    return 0;
}
