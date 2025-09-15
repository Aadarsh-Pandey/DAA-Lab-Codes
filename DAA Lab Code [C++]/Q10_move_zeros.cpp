#include <iostream>
using namespace std;

void moveZerosToEnd(int arr[], int n) {
    int count = 0; // Count of non-zero elements

    // Traverse the array
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i]; // Place non-zero element at the next available position
        }
    }

    // Fill remaining positions with zeros
    while (count < n) {
        arr[count++] = 0;
    }
}

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveZerosToEnd(arr, n);

    cout << "Array after moving zeros to the end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
