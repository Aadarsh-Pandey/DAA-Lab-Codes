#include <iostream>
using namespace std;

int main() {
    int value[] = {100, 200, 300};
    int weight[] = {10, 20, 30};
    int n = sizeof(value) / sizeof(value[0]);
    int capacity = 50;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            float ratio1 = (float)value[j] / weight[j];
            float ratio2 = (float)value[j + 1] / weight[j + 1];
            if (ratio1 < ratio2) {
                int tempVal = value[j];
                value[j] = value[j + 1];
                value[j + 1] = tempVal;

                int tempWt = weight[j];
                weight[j] = weight[j + 1];
                weight[j + 1] = tempWt;
            }
        }
    }

    float maxValue = 0;
    int remaining = capacity;

    for (int i = 0; i < n; i++) {
        if (weight[i] <= remaining) {
            cout << "Take full item with value " << value[i] 
                 << " and weight " << weight[i] << endl;
            maxValue += value[i];
            remaining -= weight[i];
        } else {
            float fraction = (float)remaining / weight[i];
            cout << "Take " << fraction * 100 << "% of item with value " 
                 << value[i] << " and weight " << weight[i] << endl;
            maxValue += value[i] * fraction;
            remaining = 0;
            break;
        }
    }

    cout << "Maximum value = " << maxValue << endl;
    return 0;
}