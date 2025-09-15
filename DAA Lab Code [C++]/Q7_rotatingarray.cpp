#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to rotate array to the right by k
void rotateArray(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n; // To handle k > n

    // Reverse the whole array
    reverse(arr.begin(), arr.end());
    // Reverse first k elements
    reverse(arr.begin(), arr.begin() + k);
    // Reverse remaining n-k elements
    reverse(arr.begin() + k, arr.end());
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotateArray(arr, k);

    cout << "Rotated Array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    return 0;
}
