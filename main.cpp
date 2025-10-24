#include <string>
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int number;
    std::cout << "Введите число:" << endl;
    std::cin >> number;
    if (number >= 0 && number <= 10) {
        std::cout << ("Число в диопозоне от 0-10");
    }
    else if (number >= 11 && number <= 20) {
        std::cout << ("Число в диопозоне от 11-20");
    } else if (number >= 21 && number <= 30) {
        std::cout << ("Число в диопозоне от 21-30");
    } else if (number >= 31 && number <= 40) {
        std::cout << ("Число в диопозоне от 31-40");
    } else if (number >= 41 && number <= 50) {
        std::cout << ("Число в диопозоне от 41-50");
    } else if (number >= 51 && number <= 60) {
        std::cout << ("Число в диопозоне от 51-60");
    } else if (number >= 61 && number <= 70) {
        std::cout << ("Число в диопозоне от 61-70");
    } else if (number >= 71 && number <= 80) {
        std::cout << ("Число в диопозоне от 71-80");
    } else if (number >= 81 && number <= 90) {
        std::cout << ("Число в диопозоне от 81-90");
    } else if (number >= 91 && number <= 100) {
        std::cout << ("Число в диопозоне от 91-100");
    }
    else if (number < 0) {
        std::cout << ("Ошибка! Число меньше 0.");
    }
    else if (number > 100) {
        std::cout << ("Ошибка! Число больше 100.");
    }
 }
