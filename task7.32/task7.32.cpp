#include <iostream>
#include <vector>

int main() {
    int v;
    int two = 0;
    std::vector<int> num;

    std::cout << "Ввдеите оценки экзамена и напишите 0 для завершения" << std::endl;
    
    while(true) {
        std::cin >> v;
        if(v == 0) {
            break;
        }
        if(v <= 1 || v >= 6) {
            std::cout << "Надо ОЦЕНКИ ОТ 2 ДО 5!!!" << std::endl;
        }
        num.push_back(v);
        if(v == 2){
            two++;
        }
    }

    std::cout << "Двоек: " << two << std::endl;

    return(0);
}
