#include <iostream>
using namespace std;

class counter {
    private:
        int* count;
    public:
        counter(int* count) {
            this -> count = count;
        }
    void increment() {
        (*count)++;
        cout << *count << endl;
    }
};

int main() {
    int c = 0;
    counter a(&c);
    a.increment();
    return(0);
}