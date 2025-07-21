
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
    string s;
    cin >> s;
    int n = s.length();
    vector<int> pr(n + 1, 0);

    for (int i = 0; i < n - 1; i++)
    {

        pr[i + 1] = pr[i] + (s[i + 1] == s[i]);
    }
    pr[n] = pr[n - 1];

    int queries;
    cin >> queries;
    while (queries--)
    {
        int left, right;
        cin>> left >> right;
        cout << pr[right - 1] - pr[left - 1] << endl;
    }

    return 0;
}
