#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    vector<int> h;
    int i = 0;
    int j = 0;
        while (true) {
        cout << "Введите элемент массива (0 для завершения): ";
        int a; cin >> a;
        h.push_back(a);
        i++;
        if (a == 0) {
            break;
        }
    }

    for(auto elem : h) {
        if(elem != 0) {
            j += elem;
            if(elem > j / i) {
                cout << elem << " " << endl;
            }
        } 
    }

    return 0;
}