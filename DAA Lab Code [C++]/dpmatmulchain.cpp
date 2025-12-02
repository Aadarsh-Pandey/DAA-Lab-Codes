#include <iostream>
#include <climits>
using namespace std;

int main() {

    int p[] = {5, 6, 7, 9, 13}; 
    int n = 5;                 

    int m[n][n];

    for (int i = 1; i < n; i++)
        m[i][i] = 0;

    for (int len = 2; len < n; len++) {
        for (int i = 1; i < n - len + 1; i++) {
            int j = i + len - 1;
            m[i][j] = INT_MAX;

            for (int k = i; k < j; k++) {
                int cost = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];

                if (cost < m[i][j])
                    m[i][j] = cost;
            }
        }
    }

    cout << m[1][n - 1];
    return 0;
}