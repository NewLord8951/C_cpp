#include <iostream> 
#include <ctime> 
#include <vector> 
#include <algorithm> 
using namespace std; 

int main() { 
    vector<int> mass; 
    srand(time(NULL)); 
    for(int i = 0; i < 7; i++) { 
        mass.push_back(rand() % 100 - 1); 
    } 
    sort(mass.begin(), mass.end()); 
    for(int i : mass) { 
        cout << i << ' ' << endl; 
    }
    int two;
    if (mass.size() >= 2) {
        int two = mass[mass.size() - 2];
        cout << "Второй по величине: " << two << endl;
    }
    int min = 102;
    for (int i = 0; i < 7; ++i) {
        if (mass[i] < min) {
            min = mass[i];
        }
    }
    int max = -2;
    for (int i = 0; i < 7; ++i) {
        if (mass[i] > max) {
            max = mass[i];
        }
    }
    cout << "Разница: " << max - min << endl;
    return 0; 
}
