#include <iostream>
#include <string>
using namespace std;

int main() {
    string a = "Hello World!";
    auto aa{[a](){return a;}};
    cout << aa() << endl;
    return 0;
}