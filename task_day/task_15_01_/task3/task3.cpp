#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            int ch;
            cout << "Введите элемент массива: " << endl;
            cin >> ch;
            matrix[i][j] = ch;
        }
    }
    int sum_gd = 0;
    int sum_pd = 0;
    int sum_all = 0;
    for(int i = 0; i < 3; ++i) {
        sum_gd += matrix[i][i];
        sum_pd += matrix[i][3 - 1 - i];
        for(int j = 0; j < 3; ++j) {
            cout << matrix[i][j] << " ";
            sum_all += matrix[i][j];
        }
        cout << endl;
    }
    cout << "Сумма главной диагонали: " << sum_gd << endl;
    cout << "Сумма побочной дианонали: " << sum_pd << endl;
    cout << "Общая сумма: " << sum_all << endl;
    return 0;
}