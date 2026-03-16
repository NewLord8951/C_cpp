#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Anna";
    auto lymbda{[name](){return("Hello, " + name + "!");}};
    int h0;
    cout << lymbda() << endl;
    return 0;
}