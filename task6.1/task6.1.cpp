#include <iostream>
#include <vector>

int main() {
    int col_mass;
    std::cout << "Ввдеите насколько большой будет массив: " << std::endl;
    std::cin >> col_mass;

    std::vector<int> number(col_mass);

    std::cout << "Ввдеите " << col_mass << " Чисел: ";
    for(int i = 0; i < col_mass; i++) {
        std::cin >> number[i]; 
    }

    std::cout << "Массив: ";
    for(int i = 0; i < col_mass; i++) {
        std::cout << number[i] << " "; 
    }

    int sum = 0;
    for(int i = 0; i < col_mass; i++) {
        sum += number[i];
    }

    std::cout << "а) Сумма: " << sum << std::endl;

    std::cout << "б) Колличество: " << col_mass << std::endl;

    return(0);
}
