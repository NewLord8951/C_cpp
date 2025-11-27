#include <iostream>
#include <random>
using namespace std;

int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100);
    int a = dis(gen);
    int b;

    
    while(true) {
        cout << "Ввдеите число: " << endl;
        cin >> b;
        if(b < a) {
            cout << "Больше!" << endl;
        }
        else if(b > a) {
            cout << "Меньше!" << endl;
        }
        else if(b == a) {
            cout << "Вы угадали!!!" << endl;
            break;
        }
        else{
            cout << "Ошибка" << endl;
        }
    }

    return 0;
}