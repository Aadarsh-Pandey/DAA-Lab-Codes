#include <iostream>      //Method 1: Using set (Simple & Fast)
#include <vector>
#include <set>
using namespace std;

vector<int> removeDuplicates(vector<int>& arr) {
    set<int> s(arr.begin(), arr.end());              // removes duplicates automatically
    return vector<int>(s.begin(), s.end());          // convert back to vector
}

int main() {
    vector<int> arr = {1, 2, 3, 2, 4, 1, 5};

    vector<int> result = removeDuplicates(arr);

    cout << "Array after removing duplicates: ";
    for (int x : result) cout << x << " ";
    return 0;
}































/*

Method 2: Without Extra Space (Sorting + Unique)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 2, 4, 1, 5};

    // Sort the array
    sort(arr.begin(), arr.end());

    // Use unique() to move duplicates to the end
    auto last = unique(arr.begin(), arr.end());

    // Resize array to remove duplicates
    arr.erase(last, arr.end());

    cout << "Array after removing duplicates: ";
    for (int x : arr) cout << x << " ";
    return 0;
}

*/