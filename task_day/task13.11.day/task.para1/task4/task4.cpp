#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    int num[15];
    srand(time(NULL));
    for(int i = 0; i < 15; i++) {
        num[i] = rand() %  + 1;
    }

    for(int j = 0; j < 15; j++) {
        cout << "Первый массив: " << num[j] << " " << endl;
    }
    
    cout << " " << endl;

    for(int c = 0; c < 15; ++c) {
        for(int d = c + 1; d < 15; ++d) {
            if(num[c] == num[d]) {
                num[d] = 0;
            }
        }
    }

    for(int a = 0; a < 15; a++) {
        cout << "Второй массив: " << num[a] << " " << endl;
    }

    return 0;
}