#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    list<string> a;
    int b;
    while(true) {
        cout << "Введите 0(Выйти), 1(написать), 2(вывести)" << endl;
        cin >> b;
        string c;
        if(b == 1) {
            while(true) {
                cout << "Введите текст и на конце напишите exit" << endl;
                cin >> c;
                a.push_front(c);
                if(c == "exit") {
                    break;
                }
            }
        }
        if(b == 2) {
            while(!a.empty()) {
                cout << a.back() << " | ";
                a.pop_back();
            }
            cout << endl;
        }
        if(b == 0) {
            break;
        }
    }
    
    return 0;
}

