#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

int main() {
    int a;
    cout << "Введите размер двумерного массива: " << endl;
    cin >> a;
    int b;
    cout << "Введите размер двумерного массива: " << endl;
    cin >> b;
    int arr[a][b];
    srand(time(NULL));
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            arr[i][j] = rand() % 100 + 1;
        }
    }
    sort(arr[0], arr[0] + a * b);

    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}