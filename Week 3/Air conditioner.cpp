#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define int long long

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> pos(k + 1);  // positions of conditioners (1-based)
        vector<int> temp(k + 1); // temperatures of conditioners
        vector<int> pre(n + 2, 1e8);
        vector<int> suf(n + 2, 1e8);

        for (int i = 1; i <= k; i++)
            cin >> pos[i];

        for (int i = 1; i <= k; i++)
            cin >> temp[i];

        for (int i = 0; i <= n + 1; i++)
        {
            pre[i] = suf[i] = 1e8; // or some large number like 1e18
        }

        for (int i = 1; i <= k; i++)
        {
            pre[pos[i]] = temp[i];
            suf[pos[i]] = temp[i];
        }
        for (int i = 1; i <= n; i++)
        {
            pre[i] = min(pre[i], pre[i - 1] + 1);
        }

        for (int i = n; i >= 1; i--)
        {
            suf[i] = min(suf[i], suf[i + 1] + 1);
        }
        for (int i = 1; i <= n; i++)
        {
            cout << min(pre[i], suf[i]) << " ";
        }
        cout << endl;
    }

    return 0;
}
