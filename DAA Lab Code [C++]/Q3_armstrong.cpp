#include <iostream>
using namespace std;

int main() {
    int num, originalNum, remainder, n = 0, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    // Calculate the sum of nth powers of digits manually
    while (originalNum != 0) {
        remainder = originalNum % 10;
        int power = 1;
        for (int i = 0; i < n; i++) {
            power *= remainder;
        }
        sum += power;
        originalNum /= 10;
    }

    // Check if the number is an Armstrong number
    if (sum == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}
