#include <iostream>

void printWelcomeMessage() {
    setlocale(LC_ALL, "Rus");
    std::cout << "WELOCME!!\n";
    std::cout << "Вы можете выполнить следующие операции:\n";
    std::cout << "1. Сложение\n";
    std::cout << "2. Вычитание\n";
    std::cout << "3. Умножение\n";
    std::cout << "4. Деление\n";
    std::cout << "Введите номер операции, которую хотите выполнить:\n";
}

int main() {
    printWelcomeMessage();

    int choice;
    std::cin >> choice;

    double num1, num2;
    std::cout << "Введите два числа:\n";
    std::cin >> num1 >> num2;
    std::cout << "Добавлен функционал ввода";

    double result;
    switch (choice) {
    case 1:
        result = num1 + num2;
        std::cout << "Результат сложения: " << result << "\n";
        std::cout << "Выполнение арифметической операции";
        break;
    case 2:
        result = num1 - num2;
        std::cout << "Результат вычитания: " << result << "\n";
        std::cout << "Выполнение арифметической операции";
        break;
    case 3:
        result = num1 * num2;
        std::cout << "Результат умножения: " << result << "\n";
        std::cout << "Выполнение арифметической операции";
        /*std::cout << "Выполнение арифметической операции";*/
        break;
    case 4:
        if (num2 != 0) {
            result = num1 / num2;
            std::cout << "Результат деления: " << result << "\n";
            std::cout << "Выполнение арифметической операции";
        }
        else {
            std::cout << "Ошибка: деление на ноль!\n";
            std::cout << "Выполнение арифметической операции";
        }
        break;
    default:
        std::cout << "Неверный выбор операции.\n";
        std::cout << "Выполнение арифметической операции";
        break;
    }

    return 0;
}