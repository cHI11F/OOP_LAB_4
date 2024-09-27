#include <iostream>
#include "Integer.h"

int main() {
    Integer num1, num2;

   
    std::cout << "Введіть перше число для обчислення суми: ";
    std::cin >> num1;
    std::cout << "Введіть друге число для обчислення суми: ";
    std::cin >> num2;

    Integer sum = num1 + num2; 
    std::cout << "Сума: " << sum << std::endl;

    
    std::cout << "Введіть перше число для обчислення добутку: ";
    std::cin >> num1;
    std::cout << "Введіть друге число для обчислення добутку: ";
    std::cin >> num2;

    Integer product = num1 * num2; 
    std::cout << "Добуток: " << product << std::endl;

    
    Integer input;
    std::cin >> input;
    std::cout << "Введене значення: " << input << std::endl;

    
    std::string strValue = static_cast<std::string>(input);
    std::cout << "Перетворене у рядок: " << strValue << std::endl;

    
    ++num1;
    num2++;
    --num1;
    num2--;

    std::cout << "Після інкременту та декременту: " << num1 << ", " << num2 << std::endl;

    return 0;
}

