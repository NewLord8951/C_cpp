#include <iostream>
using namespace std;

int main() {
    int chis;
    cout << "Введите число: " << endl;
    cin >> chis;
    int *num_is = &chis;
    while(chis != 0) {
        int num0 = *num_is % 10;
        cout << "Цифры: " << num0 << endl;
        *num_is = *num_is / 10;
    }
    return 0;
}