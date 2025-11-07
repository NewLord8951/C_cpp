#include <iostream>
#include <string>
using namespace std;

int main() {
    while(true) {
        int a;
        cout << "Введите первое число: " << endl;
        cin >> a;
        
        int b;
        cout << "Введите второе число: " << endl;
        cin >> b;

        string op;
        cout << "Введите + или - или * или /:, для завершения введите q: " << endl;
        cin >> op;

        if(op == "+") {
            cout << "Итог:" << a + b << endl;
        }
        else if(op == "-") {
            cout << "Итог:" << a - b << endl;
        }
        else if(op == "*") {
            cout << "Итог:" << a * b << endl;
        }
        else if(op == "/") {
            cout << "Итог:" << a / b << endl;
        }
        else{
            cout << "Ошибка" << endl;
            break;
        }

        if(op == "q") {
            break;
        }
    }
    return 0;
}