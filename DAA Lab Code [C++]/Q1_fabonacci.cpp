#include <iostream>
using namespace std;

int main() {
    int n, first_number = 0, second_number = 1, next_number;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series up to " << n << " terms:" << endl;

    for (int i = 1; i <= n; i++) {
        cout << first_number << " ";
        next_number = first_number + second_number;
        first_number = second_number;
        second_number = next_number;
    }

    return 0;
}
