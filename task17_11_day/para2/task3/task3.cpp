#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
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
    srand(time(NULL));

    for(int i = 0; i < m * n; i++) {
        arr[i] = rand() % 100 + 1;
    }

    sort(arr.begin(), arr.end());

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