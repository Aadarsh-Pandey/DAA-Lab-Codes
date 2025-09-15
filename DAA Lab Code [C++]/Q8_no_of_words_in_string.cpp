#include <iostream>
#include <sstream>  // for stringstream
#include <string>
using namespace std;

int countWords(const string& str) {
    stringstream ss(str); // break string into words
    string word;
    int count = 0;

    while (ss >> word) { // extract each word
        count++;
    }
    return count;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Number of words: " << countWords(str) << endl;
    return 0;
}


/*
#include <iostream>
#include <string>
using namespace std;

int countWords(const string& str) {
    int count = 0;
    bool inWord = false;

    for (char c : str) {
        if (isspace(c)) {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            count++;
        }
    }
    return count;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Number of words: " << countWords(str) << endl;
    return 0;
}

*/