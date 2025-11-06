#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cout << "Введите первое число: " << endl;
    cin >> a;
    
    int b;
    cout << "Введите второе число: " << endl;
    cin >> b;

    string op;
    cout << "Введите + или - или * или /: " << endl;
    cin >> op;

    if(op == "+") {
        cout << a + b << endl;
    }
    else if(op == "-") {
        cout << a - b << endl;
    }
    else if(op == "*") {
        cout << a * b << endl;
    }
    else if(op == "/") {
        cout << a / b << endl;
    }
    else{
        cout << "Ошибка" << endl;
    }

    return 0;
}