#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vt(n);
    for (int i = 0; i < n; i++)
        cin >> vt[i];
    sort(vt.begin(), vt.end());
    int min = vt[1] - vt[0];
    int count = 1;
    for (int i = 1; i < n - 1; i++)
    {
        if (vt[i + 1] - vt[i] == min)
        {
            count++;
        }
        if (vt[i + 1] - vt[i] < min)
        {
            min = vt[i + 1] - vt[i];
            count = 1;
        }
    }
    cout << min << " " << count;
    return 0;
}