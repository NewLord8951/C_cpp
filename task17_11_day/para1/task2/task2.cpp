#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr(36);

    for(int i = 0; i < 36; i++) {
        if(i % 3 == 0) {
            arr[i] = i * 3;
        }
    }

    int c = 0;
    for(int i = 0; i < 36; i++) {
        cout << arr[i] << " ";
        if((i + 1) % 6 == 0) {
            cout << endl;
        }
    }

    return 0;
}