#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int MOD = 1e9 + 7;
const ll MAX = 1e7;

int main()
{
    ll n;
    cin >> n;
    int count = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count++;
            n /= i;
            if (n % i == 0)
            {
                cout << 0;
                return 0;
            }
        }
        if (count > 3)
        {
            cout << 0;
            return 0;
        }
    }
    if (n != 1)
    {
        count++;
    }
    if (count == 3)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}