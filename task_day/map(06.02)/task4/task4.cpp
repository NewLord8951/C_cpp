#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {5, 2, 8, 2, 5, 5, 9, 2, 8, 1, 3, 7, 3};
    set<int> sortedUnique(numbers.begin(), numbers.end());
    cout << "Отсортированные уникальные числа: ";
    for(int i : sortedUnique) {
        cout << i << " ";
    }
    cout << "\nВсего уникальных чисел: " << sortedUnique.size() << endl;
    
    return 0;
}
