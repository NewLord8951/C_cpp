#include <iostream>
using namespace std;

void funkc(int a, int b, int c) {
    int* d;
    int* e;
    if(a < b && a < c) {
        d = &a;
    }
    else if(b < c && b < a) {
        d = &b;
    }
    else if(c < a && c < b) {
        d = &c;
    }
    else {
        d = 0;
    }
    if(a > b && a > c) {
        e = &a;
    }
    else if(b > c && b > a) {
        e = &b;
    }
    else if(c > a && c > b) {
        e = &c;
    }
    else {
        e = 0;
    }
    cout << *e << " " << *d << endl;
}

int main() {
    int a, b, c;
    cout << "Ввдеиет числа: a, b, c: " << endl;
    cin >> a >> b >> c;
    funkc(a, b, c);
    return 0;
}