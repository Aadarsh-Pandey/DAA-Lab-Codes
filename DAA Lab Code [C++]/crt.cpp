#include <iostream>
using namespace std;

int main() {
    int a[3] = {2, 3, 2};
    int m[3] = {3, 5, 7};
    int n = 3;

    int M = 1;
    for (int i = 0; i < n; i++) {
        M *= m[i];
    }

    int result = 0;

    for (int i = 0; i < n; i++) {

        int Mi = M / m[i];

        int inverse = -1;
        for (int x = 1; x < m[i]; x++) {
            if ((Mi * x) % m[i] == 1) {
                inverse = x;
                break;
            }
        }

        result += a[i] * Mi * inverse;
    }

    result = result % M;

    cout << "x = " << result << endl;

    return 0;
}