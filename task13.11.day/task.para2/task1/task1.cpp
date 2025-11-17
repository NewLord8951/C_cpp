#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main() {
    vector<int> num(10);
    vector<int> ninum;
    vector<int> plnum;
    srand(time(NULL));

    for(int i = 0; i < 10; i++) {
        num[i] = rand() % 50 + 1;
    }

    cout << "Первый массив: ";
    for(int a = 0; a < 10; a++) {
        cout << num[a] << " ";
    }
    cout << endl;

    sort(num.begin(), num.end());

    for(int val : num) {
        if(val % 2 != 0) {
            ninum.push_back(val);
        } else {
            plnum.push_back(val);
        }
    }

    
    sort(ninum.rbegin(), ninum.rend());

    cout << "Второй массив (отсортированный): ";

    for(auto c : plnum) {
        cout << c << " " << endl;
    }
    for(auto s : ninum) {
        cout << s << " " << endl;
    }


    return 0;
}
