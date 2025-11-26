#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

int main() {
    vector<int> h;
    vector<int> q;
    srand(time(NULL));

    for(int i = 0; i != 15; i++) {
        h.push_back(rand() % 20 + 1);
    }

    for(int i = 0; i != 15; i++) {
        cout << "Вектор: " << h[i] << endl;
    }

    for(int i = 0; i != 15; i++) {
        if(i % 3 == 0) {
            h.erase(h.begin() + i);
            
        }
    }

    for(int i = 0; i != 15; i++) {
        cout << "Вектор: " << h[i] << endl;
    }

    return 0;
}