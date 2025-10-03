#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9 + 7;
const int MAX = 500;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int res = 0;
    int F[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    for (int i = 0; i < 10; i++)
    {
        if (n >= F[i])
        {
            res += n / F[i];
            n = n % F[i];
        }
        if (n == 0)
        {
            break;
        }
    }
    cout << res;
}