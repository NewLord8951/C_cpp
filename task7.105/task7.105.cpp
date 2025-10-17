#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        int n;
        int c;
        int while_break = 0;
        int i;

        cout << "Введите натуральное число n: " << endl;
        cin >> n;
        if(n < 1) {
            throw runtime_error("Это ненатуральное число");
        }

        cout << "Ввдеите число i: " << endl;
        cin >> i;
        if(n < i) {
            throw runtime_error("i должно быть меньше или равно n");
        }

        cout << "Ввдеите числа c через пробел: " << endl;

        while(true) {
            while_break++;
            cin >> c;
            if(c < 0) {
                throw runtime_error("Числа должны быть положительными");
            }
            if(while_break == i) {
                break;
            }
        }

        int while_0 = 0;

        if(c < 20 && while_break >= 5) {
            cout << "Да" << endl;
        }
        else {
            cout << "Нет" << endl;
        }
    }
    catch(runtime_error e) {
        cerr << "Ошибка " << e.what() << endl;
    }

    return(0);
}
