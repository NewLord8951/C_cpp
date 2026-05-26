#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
using namespace std;

class hihihiha {
    private:
        vector<vector<int>> matrix;
    public:
        hihihiha(vector<vector<int>> matrix) {
            this->matrix = matrix;
        }
        void vvod() {
            matrix.resize(200, vector<int>(200));
            for(int i = 0; i < 200; i++) {
                for(int j = 0; j < 200; j++) {
                    matrix[i][j] = rand() % 9;
                }
            }
            const string GREEN = "\033[32m";
            for(int k = 0; k < 200; k++) {
                for(int q = 0; q < 200; q++) {
                    
                    cout << GREEN << matrix[k][q] << " ";
                }
                cout << endl;
            }
        }
};

int main() {
    srand(time(0));
    vector<vector<int>> b;
    hihihiha a(b);
    int w = 0;
    while(true) {
        a.vvod();
        w++;
        if(w == 10) {
            break;
        }
    }
    return 0;
}
