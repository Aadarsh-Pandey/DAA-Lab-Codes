#include <iostream>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);         // Reads full line including spaces

    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // Convert to uppercase
        }
    }

    cout << "Uppercase string: " << str << endl;

    return 0;
}
