#include <iostream>
using namespace std;

int main() {
    int num1;
    cout << "Введите число 1: " << endl;
    cin >> num1;
    int num2;
    cout << "Введите число 2: " << endl;
    cin >> num2;
    int* ptr_num1 = &num1;
    int* ptr_num2 = &num2;
    int sum = *ptr_num1 + *ptr_num2;
    cout << sum << endl;
    return 0;
}