#include <iostream>
#include <climits>
using namespace std;

// Function to find the minimum number of multiplications
int MatrixChainOrder(int p[], int n) {
    int m[n][n]; // m[i][j] = Minimum number of multiplications needed to compute Ai...Aj

    // cost is zero when multiplying one matrix
    for (int i = 1; i < n; i++)
        m[i][i] = 0;

    // L is chain length
    for (int L = 2; L < n; L++) {
        for (int i = 1; i < n - L + 1; i++) {
            int j = i + L - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k < j; k++) {
                // cost = cost of splitting + cost of multiplying the two parts
                int cost = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (cost < m[i][j])
                    m[i][j] = cost;
            }
        }
    }

    return m[1][n - 1];
}

int main() {
    int n;
    cout << "Enter number of matrices: ";
    cin >> n;

    int p[n + 1];
    cout << "Enter dimensions (size " << n + 1 << "): ";
    for (int i = 0; i <= n; i++)
        cin >> p[i];

    cout << "Minimum number of multiplications is: "
         << MatrixChainOrder(p, n + 1) << endl;

    return 0;
}
