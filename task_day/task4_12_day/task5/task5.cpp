#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ввдеите размер(0): " << endl;
    cin >> n;
    int m;
    cout << "Ввдеите размер(1): " << endl;
    cin >> m;
    int arr[n][m];
    int sum = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << "Введите элемент массива: " << endl;
            cin >> arr[i][j];
        }
    }
    int a = arr[0][0];
    int b = arr[0][0];
    int c = 0;
    int e;
    int f;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            c++;
            if(arr[i][j] < a) {
                a = arr[i][j];
                e = c;
            }
            if(arr[i][j] > b) {
                b = arr[i][j];
                f = c;
            }
        }
    }
    cout << "Минимальный элемент: " << a << " " << "Индекс: " << e - 1 << endl;
    cout << "Максимальный элемент: " << b << " " << "Индекс: " << f - 1 << endl;
    return 0;
}