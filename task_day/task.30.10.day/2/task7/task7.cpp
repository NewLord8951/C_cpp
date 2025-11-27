#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cout << "Введите рост в см: " << endl;
    cin >> a >> b >> c;

    int d = max({a, b, c});
    int e = min({a, b, c});
    
    cout << "Разница в росте между самым большим и самым маленьким: " << d - e << endl;
    return 0;
}