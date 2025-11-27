#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    int num[10];
    srand(time(NULL));
    int h = 0;
    for (int i = 0; i < 10; i++) {
        num[i] = rand() % 100 + 1;
    }

    for(int j = 0; j < 10; j++) {
        cout << num[j] << " ";
    }
    cout << endl;

    for(int c = 9; c > -1; c--) {
        cout << num[c] << " ";
    }
    cout << endl;

    for(int c = 9; c > -1; c--) {
        if(num[c] % 2 == 0) {
            h++;
        }
    }

    cout << h << endl;

    return 0;
}