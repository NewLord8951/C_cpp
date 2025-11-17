#include <iostream>

using namespace std;

int main() {
    int i = 120;
    int c = 0;
    while(i < 140) {
        for(int j = 1; j < i; ++j) {
            if((i / j) % 2 == 0) {
                c++;
            }
        }
        i++;
    }

    cout << c << endl;

    return(0);
}