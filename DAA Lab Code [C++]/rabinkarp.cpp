#include <bits/stdc++.h>
using namespace std;

int main() {
    string t = "ababcabcababc";
    string p = "abc";

    int n = t.size();
    int m = p.size();

    int hp = 0;

    for (int i = 0; i < m; i++)
        hp = hp + (p[i] - 'a' + 1);

    for (int i = 0; i <= n - m; i++) {

        int ht = 0;

        for (int j = 0; j < m; j++)
            ht = ht + (t[i + j] - 'a' + 1);

        if (ht == hp) {
            int j = 0;
            while (j < m && t[i + j] == p[j]) j++;
            if (j == m) cout << "match at index " << i << "\n";
        }
    }
}