#include <iostream>
using namespace std;

int main() {
    int massive[10];
    long int min = 9999999;
    long int max = -9999999;
    int middle;
    for(int i = 0; i < 10; i++) {
        int chisla;
        cout << "Введите числа: " << endl;
        cin >> chisla;
        massive[i] = chisla;
        if(massive[i] < min) {
            min = massive[i];
        }
        if(massive[i] > max) {
            max = massive[i];
        }
        middle += massive[i];
    }

    for(int i = 0; i < 10; i++) {
        cout << massive[i] << endl;
    }
    cout << "Минимальный элемент: " << min << endl;
    cout << "Максимальный элемент: " << max << endl;
    cout << "Среднее арифметическое: " << middle / 10 << endl;
    return 0;
}