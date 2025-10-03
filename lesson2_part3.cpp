#include <bits/stdc++.h>

using namespace std;
#define ll long long int
const int MOD = 1e9 + 7;
const int MAX = 1e7 + 1;

int main()
{
    int n;
    cin >> n;
    ll Passcal[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                Passcal[i][j] = 1;
                cout << Passcal[i][j] << " ";
            }
            else
            {
                Passcal[i][j] = ((Passcal[i - 1][j]) % MOD + (Passcal[i - 1][j - 1]) % MOD) % MOD;
                cout << Passcal[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}