#include <iostream>
using namespace std;

int main() {
    int a, b, temp;       //temp=temporary variable used for swapping values

    cout << "Enter two numbers: "<<endl;
    cin >> a >> b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    temp = a;                           // Swapping using a third variable
    a = b;
    b = temp;

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
