#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

class pi {
    protected:
        vector<int> random;
        int limit;
    public:
        pi(vector<int> random, int limit) {
            this->random = random;
            this->limit = limit;
        }
    void lim() {
        srand(time(0));
        cout << "Введите лимит: " << endl;
        cin >> limit;
        cout << " " << endl;
        for(int i = 0; i < limit; i++) {
            random.push_back(rand() % (10 - 1 + 1) + 1);
        }
        for(int i = 0; i < limit; i++) {
            cout << random[i] << endl;
        }
    }
};

int main() {
    vector<int> a;
    int b;
    pi c(a, b);
    c.lim();
    return 0;
}