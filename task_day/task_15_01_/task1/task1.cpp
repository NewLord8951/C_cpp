#include <iostream>
using namespace std;

int main() {
    int num1;
    cout << "Введите число 1: " << endl;
    cin >> num1;
    int num2;
    cout << "Введите число 2: " << endl;
    cin >> num2;
    int sum = num1 + num2;
    if(sum > 0) {
        cout << "Сумма положительная: " << sum << endl;
    }
    else if(sum < 0) {
        cout << "Сумма отрицательная: " << sum << endl;
    }
    else if(sum == 0) {
        cout << "Сумма равна нулю" << endl;
    }
    else{
        cout << "Это нереально: " << endl;
    }
    return 0;
}