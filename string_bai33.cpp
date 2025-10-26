#include <bits/stdc++.h>
using namespace std;

bool check(string s) {
    int l = 0;
    int r = s.size() - 1;
    while (l <= r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    bool check6 = s.find('6') != string::npos;
    if (check6 && check(s)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}