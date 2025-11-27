#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> mass(15);
    srand(time(NULL));
    int mini = 0;
    int maxi = 0;
    int j = 0;

    for(int i = 0; i != 15; i++) {
        mass[i] = rand() % 100 + 1 - 50;

    }

    for(int i = 0; i != 15; i++) {
        if(mass[i] < mini) {
            mini = mass[i];
        }
    }

    cout << "Минимальное число: " << mini << " " << endl;
    cout << " " << endl;

    for(int i = 0; i != 15; i++) {
        if(mass[i] > maxi) {
            maxi = mass[i];
        }
    }

    cout << "Максимальное число: " << maxi << " " << endl;
    cout << " " << endl;

    for(int i = 0; i != 15; i++) {
        if(mass[i] < 0) {
            j++;
        }
    }

    cout << "Отрицательные числа: " << j << " " << endl;

    return 0;
}