
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of matrix (n): ";
    cin >> n;

    int A[n][n], B[n][n], C[n][n];

    cout << "Enter elements of matrix A:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    cout << "Enter elements of matrix B:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> B[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }

    cout << "Resultant matrix C (A × B):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << C[i][j] << " ";
        cout << "\n";
    }

    return 0;
}
