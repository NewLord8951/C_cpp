#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    set<int> set1 = {1, 3, 5, 7, 9};
    set<int> set2 = {2, 3, 5, 7, 11};
    set<int> unionSet, intersectionSet;
    
    set_intersection(set1.begin(), set1.end(),
     set2.begin(), set2.end(),
      inserter(intersectionSet, intersectionSet.begin()));

    set_union(set1.begin(), set1.end(),
     set2.begin(), set2.end(),
      inserter(unionSet, unionSet.begin()));

    cout << "Объединение: ";
    for (int num : unionSet) {
        cout << num << " ";
    }
    
    cout << "\nПересечение: ";
    for (int num : intersectionSet) {
        cout << num << " ";
    }
    
    return 0;
}
