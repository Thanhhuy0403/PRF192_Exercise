#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }
    char char_max = s[0];
    char char_min = s[0];
    int max = mp[s[0]];
    int min = mp[s[0]];
    for (auto it : mp) {
        if (it.second >= max) {
            max = it.second;
            char_max = it.first;
        }
        if (it.second <= min) {
            min = it.second;
            char_min = it.first;
        }
    }
    cout << char_max << " " << max << endl;
    cout << char_min << " " << min;
    return 0;
}