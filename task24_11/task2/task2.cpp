#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int arr[5][5];
    int c = 0;
    srand(time(NULL));
    for(int i = 0; i != 5; i++) {
        for(int j = 0; j != 5; j++) {
            arr[i][j] = rand() % 10 + 1;
        }
    }

    for(int i = 0; i != 5; i++) {
        for(int j = 0; j != 5; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i != 5; i++) {
        for(int j = 0; j != 5; j++) {
            if(i == j) {
                c += arr[i][j];
            }
            
        }
    }
    cout << " " << endl;
    cout << "Сумма: " << c << endl;
    return 0;
}