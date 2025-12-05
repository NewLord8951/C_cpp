#include <iostream>
#include <ctime>
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
    srand(time(NULL));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            arr[i][j] = rand() % 100 + 1;
            sum += arr[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Сумма: " << sum << endl;

    return 0;
}