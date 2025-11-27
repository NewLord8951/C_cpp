#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Ввдеите числа и в конце напишите 0: " << endl;
    while(true) {
        cin >> a;
        cout << a << endl;
        if(a == 0) {
            break;
        }
    }

    return 0;
}