#include <iostream>
#include <queue>
#include <string>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    queue<string> a;
    string c;
    while(true) {
        int b;
        cout << "Выберите действие: 1(Написать обращение), 2(Вывести обращение), 0(Выход)" << endl;
        cin >> b;
        if(b == 1) {
            cout << "Введите обращение: " << endl;
            cin >> c;
            a.push(c);
        }
        else if(b == 2) {
                while(!a.empty()) {
                cout << a.front() << " " << endl;
                a.pop(); 
            }
        }
        else if(b == 0) {
            break;
        }
        else {
            cout << "От 0 до 2" << endl;
        }
    }
    return 0;
}