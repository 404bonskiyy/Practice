#include <iostream>
#include <limits>

// Зчитує ціле число з перевіркою коректності вводу
int readInt(const std::string& prompt) {
    int value;
    while (true) {
        std::cout << prompt;
        if (std::cin >> value) {
            return value;
        }
        std::cout << "Помилка: введіть ціле число.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

void printMenu() {
    std::cout << "\n=== Реєстрація та посадка на рейс ===\n"
              << "1. Зареєструвати пасажира\n"
              << "2. Обрати місце\n"
              << "3. Здати багаж\n"
              << "4. Посадка\n"
              << "5. Затримати рейс\n"
              << "0. Вихід\n";
}

int main() {
    bool running = true;
    while (running) {
        printMenu();
        int choice = readInt("Ваш вибір: ");
        switch (choice) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                std::cout << "Цей пункт буде реалізовано на наступних етапах.\n";
                break;
            case 0:
                running = false;
                break;
            default:
                std::cout << "Невідомий пункт меню.\n";
        }
    }
    std::cout << "Роботу завершено.\n";
    return 0;
}
