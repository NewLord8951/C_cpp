#include <iostream>
using namespace std;

int main() {
    int n;
    int c;
    int while_break = 0;
    int i;

    cout << "Введите натуральное число n: " << endl;
    cin >> n;

    cout << "Ввдеите число i: " << endl;
    cin >> i;

    cout << "Ввдеите числа c через пробел: " << endl;

    while(true) {
        while_break++;
        cin >> c;
        if(while_break == i) {
            break;
        }
    }

    int while_0 = 0;

    if(c < 20 && i == 5) {
        cout << "Да" << endl;
    }
    else {
        cout << "Нет" << endl;
    }

    return(0);
}
