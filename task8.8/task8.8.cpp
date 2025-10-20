#include <iostream>

using namespace std;

int main() {
    for(int i = 9; i >= 1; --i) {
        for(int j = 1; j <= 9; ++j) {
            cout << i << "*" << j << "=" << i * j << endl;
        }
    }
}