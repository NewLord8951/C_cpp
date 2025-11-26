#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib> 
using namespace std;

int main() {
    vector<int> h;

    srand(time(NULL));

    for(int i = 0; i != 15; i++) {
        h.push_back(rand() % 20 + 1);
    }

    for(int i = 0; i != 15; i++) {
        cout << "Вектор: " << h[i] << endl;
    }

    cout << " " << endl;
    for(int i = 0; i != 15; i++) {
        if (h[i] % 3 == 0) {
            h[i] = 0;
        }
    }

    for(int i = 0; i != 15; i++) {
        cout << "Вектор: " << h[i] << endl;
    }

    return 0;
}