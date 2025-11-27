#include <iostream>
#include <vector>
using namespace std;

void printarray(vector<int> vec) {
    for(auto a : vec) {
        cout << a << endl;
    }
}

int main() {
    vector<int> num;
    int a;
    cout << "Введите размерность массива: " << endl;
    cin >> a; 
    for(int i = 0; i < a; i++) {
        cout << "Введите массив: " << endl;
        int b;
        cin >> b;
        num.push_back(b);
        cout << " " << endl;
    }
    printarray(num);
    return 0;
}