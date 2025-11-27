#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m;
    cout << "Введите число m" << endl;
    cin >> m;
    int n;
    cout << "Введите число n" << endl;
    cin >> n;
    vector<int> arr(n * m);
    int a = 0;

    for(int i = 0; i < m * n; i++) {
        arr[i] = (i * i) + (i * i);
    }

    int c = 1;
    for(int i = 0; i < n * m; i++) {
        cout << arr[i] << " ";
        if(i == (n - 1) * c) {
            cout << endl; 
            c++; 
        }        
    }

    return 0;
}