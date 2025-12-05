#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ввдеите число N: " << endl;
    cin >> n;
    int m;
    cout << "Ввдеите число M: " << endl;
    cin >> m;
    int arr[n][m];
    int sum = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << "Введите элемент массива: " << endl;
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            sum += arr[i][j];
        }
        cout << "Строка " << i << ": " << sum << endl;
        sum = 0;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            sum += arr[j][i];
        }
        cout << "Столбец " << i << ": " << sum << endl;
        sum = 0;
    }

    return 0;
}