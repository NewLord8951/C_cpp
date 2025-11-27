#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Введите размер двумерного массива: " << endl;
    cin >> a;
    int b;
    cout << "Введите размер двумерного массива: " << endl;
    cin >> b;
    int arr[a][b];
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            if(i < j) {
                arr[i][j] = 1;
            }
            else if(i > j) {
                arr[i][j] = 0;
            } 
            else if(i == j) {
                arr[i][j] = 2;
            }
        }
    }

    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}