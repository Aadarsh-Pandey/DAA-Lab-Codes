#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int knapsackBruteForce(int W, vector<int> &wt, vector<int> &val, int n) {
    int maxVal = 0;

    // There are 2^n possible subsets
    for (int mask = 0; mask < (1 << n); mask++) {
        int totalWeight = 0, totalValue = 0;

        // Check each item if it is included in subset
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                totalWeight += wt[i];
                totalValue += val[i];
            }
        }

        // If total weight is within capacity, update maxVal
        if (totalWeight <= W) {
            maxVal = max(maxVal, totalValue);
        }
    }

    return maxVal;
}

int main() {
    int n, W;
    cout << "Enter number of items: ";
    cin >> n;

    vector<int> val(n), wt(n);
    cout << "Enter values of items:\n";
    for (int i = 0; i < n; i++) cin >> val[i];

    cout << "Enter weights of items:\n";
    for (int i = 0; i < n; i++) cin >> wt[i];

    cout << "Enter capacity of knapsack: ";
    cin >> W;

    cout << "Maximum value in Knapsack = " 
         << knapsackBruteForce(W, wt, val, n) << endl;

    return 0;
}
