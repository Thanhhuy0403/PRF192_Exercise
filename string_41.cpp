#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;
    int count = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == '0') {
            count++;
        } else {
            break;
        }
    }
    if (k <= count) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}