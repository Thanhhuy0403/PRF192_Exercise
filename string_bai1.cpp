#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int countNum = 0;
    int alpha = 0;
    int spe = 0;
    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {
            countNum++;
        } else if (isalpha(s[i])) {
            alpha++;
        } else {
            spe++;
        }
    }
    cout << alpha << " " << countNum << " " << spe;
    return 0;
}