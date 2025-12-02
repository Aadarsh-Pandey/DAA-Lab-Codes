#include <iostream>
using namespace std;

int main() {
    string t = "ababcabcababc";
    string p = "abc";

    int n = t.size();
    int m = p.size();

    int l[100];
    int a = 0, b = 1;
    l[0] = 0;

    while (b < m) {
        if (p[b] == p[a]) {
            a = a + 1;
            l[b] = a;
            b = b + 1;
        } else {
            if (a != 0)
                a = l[a - 1];
            else {
                l[b] = 0;
                b = b + 1;
            }
        }
    }

    int i = 0, j = 0;

    while (i < n) {

        if (t[i] == p[j]) {
            i = i + 1;
            j = j + 1;
        } else {
            if (j != 0)
                j = l[j - 1];
            else
                i = i + 1;
        }

        if (j == m) {
            cout << i - j << "\n";
            j = l[j - 1];
        }
    }
}