#include <iostream>
#include <list>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
    list<string> a;
    int b;
    while(true) {
        cout << "Введите 0(Выйти), 1(Добавить игрока в конец), 2(Добавить игрока после другого игрока), 3(Удалить игрока), 4(Вывести)" << endl;
        cin >> b;
        string c;
        string d;
        if(b == 1) {
            cout << "Введите имя игрока: " << endl;
            cin >> c;
            a.push_back(c);
        }
        else if(b == 2) {
            cout << "Введите име игрока после которого добавляем: " << endl;
            cin >> d;
            cout << "Ввдеите имя игрока: " << endl;
            cin >> c;
            auto e = find(a.begin(), a.end(), d);
            a.emplace(next(e), c);
        }
        else if(b == 3) {
            cout << "Ввдеите имя игрока которого надо удалить: " << endl;
            cin >> c;
            auto e = find(a.begin(), a.end(), c);
            a.erase(e);
        }
        else if(b == 4) {
            while(!a.empty()) {
                cout << a.back() << " | ";
                a.pop_back();
            }
            cout << endl;
        }
        else if(b == 0) {
            break;
        }
    }
    return 0;
}