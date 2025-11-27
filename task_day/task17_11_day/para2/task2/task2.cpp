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

    for (int j = 0; j < a; ++j) {
        int nol = 0;
        int end = b - 1;
        while (nol < end) {
            swap(arr[nol][j], arr[end][j]);
            nol++;
            end--;
        }
    }

    for (int j = 0; j < a; ++j) {
        int nol2 = 0;
        int end2 = b - 1;
        while (nol2 < end2) {
            swap(arr[j][nol2], arr[j][end2]);
            nol2++;
            end2--;
        }
    }

    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}