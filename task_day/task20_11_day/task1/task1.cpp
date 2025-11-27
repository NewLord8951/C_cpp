#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a;
    cout << "Введите a: " << endl;
    cin >> a;
    vector<int> n(a);
    for(int i = 0; i < a; i++) {
        cout << "Введите n: " << endl;
        cin >> n[i];
    }
    cout << " " << endl;
    for(int i = 0; i < a; i++) {
        if(n[i] % 2 == 0) {
            cout << n[i] << " " << endl;
        }
    }
    cout << " " << endl;
    for(int i = 0; i < a; i++) {
        if(n[i] % 2 == 1) {
            cout << n[i] << " " << endl;
        }
    }

    return 0;
}
    