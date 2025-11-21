#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<short int> h;
    int i = 0;
    while (true) {
        cout << "Введите элемент массива (0 для завершения): ";
        int a; cin >> a;
        h.push_back(a);
        i++;
        if (a == 0) {
            break;
        }
    }

    reverse(h.begin(), h.end());

    for(auto elem : h) {
        if(elem != 0) {
            cout << elem << " " << endl;
        } 
    }

    return 0;
}