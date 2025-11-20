#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int q = 1;
    int a = 5;
    int b = 7;
    double c;
    cout << "Ввдеите сдвиг: " << endl;
    cin >> c;
    vector<vector<int>> num(a, vector<int>(b));
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            num[i][j] = q;
            if(q < 32) {
                q++;
            }
            else if(q == 32) {
                num[i][j] = 0;
            }
        }
    }

    vector<int> flat_num;
    for(const auto& a : num) {
        flat_num.insert(flat_num.end(), a.begin(), a.end());
    }

    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            cout << num[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}