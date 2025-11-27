#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    for(int i = 10; i > -1; --i) {
        this_thread::sleep_for(chrono::seconds(1));
        cout << i << endl;
        if(i == 0) {
            cout << "Старт!" << endl;
        }
    }
    return 0;
}