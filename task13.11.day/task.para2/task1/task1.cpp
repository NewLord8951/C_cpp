#include <iostream>
#include <vector>
#include <algorithm>
#include <locale.h>
#include <ctime>

using namespace std;
int main()
{
    setlocale(LC_ALL, "rus"); srand(time(NULL));

    cout << "Введите кол-во элементов: ";
    int n = 0; cin >> n; vector<int> arr(n); vector<int> sortirovka(n);
    for (int i = 0; i < n; i++) arr[i] = rand() % 50 + 1;

    cout << "Ваш массив: ";
    for (auto elem : arr) cout << elem << " ";

    sort(arr.begin(), arr.end()); int i = 0;

    for (auto elem : arr) {
        if (elem % 2 == 0) { 
            sortirovka[i] = elem; 
            i++;
        }
    }

    sort(arr.rbegin(), arr.rend());

    for (auto elem : arr) {
        if (elem % 2 != 0) {
            sortirovka[i] = elem;
            i++;
        }
    }

    cout << endl << "Ваш сортированный массив: ";
    for (auto elem : sortirovka)cout << elem << " ";

    return 0;
}
