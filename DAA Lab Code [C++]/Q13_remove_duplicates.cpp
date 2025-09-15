#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;

    int j = 0; // Index of the last unique element

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i]; // Place the next unique element
        }
    }

    return j + 1; // New length of the array
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int newLength = removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "New length of array: " << newLength << endl;

    return 0;
}
