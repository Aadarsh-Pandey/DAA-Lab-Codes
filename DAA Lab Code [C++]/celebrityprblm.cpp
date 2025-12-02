#include <iostream>
using namespace std;

int main() {
    int n = 4;

    int M[4][4] = {
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {0, 0, 0, 1},
        {0, 0, 0, 0} 
    };

    for (int c = 0; c < n; c++) {
        bool isCeleb = true;

        for (int i = 0; i < n; i++) {
            if (i == c) continue;
            if (M[c][i] == 1) isCeleb = false;
            if (M[i][c] == 0) isCeleb = false;
        }

        if (isCeleb) {
            cout << c << endl;
            return 0;
        }
    }

    cout << "No celebrity\n";
    return 0;
}