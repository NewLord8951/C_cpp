#include <iostream>
#include <string>
using namespace std;

int main() {
    int i = 0;
    string a;
    
    while(true) {
        cout << "Ввдеите пароль: " << endl;
        cin >> a;
        if(a == "aaaa") {
            cout << "Пароль верный" << endl;
            break;
        }
        else{
            cout << "Пароль не верный" << endl;
            i++;
        }
        if(i == 3) {
            cout << "Слишком много попыток" << endl;
            break;
        }
    }

    return 0;
}