#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<char> a;
    int change;
    string b;
    int d;
    while(true) {
        cout << "Ввдеите 0(выход), 1(ввод), 2(вывод)" << endl;
        cin >> change;
        if(change == 0) {
            break;
        }
        else if(change == 1) {
            while(true) {
                cout << "Ввдеите скобки в одинарных кавычках: " << endl;
                cin >> b;
                a.emplace(b);
                if(b == "0") {
                    break;
                }    
            }
        }
        else if(change == 2) {
            while(!a.empty()) {
                cout << a.top() << " " << endl;
                a.pop();  
            }
        }
    }
   
    return 0;
}