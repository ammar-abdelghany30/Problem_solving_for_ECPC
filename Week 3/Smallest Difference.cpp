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
        int n;
        cin >> n;
        int arr[n + 6];
        int freq[10001] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        int max_count = 0;
        for (int i = 1; i <= 10000; i++)
        {
            max_count = max(max_count, freq[i] + freq[i + 1]);
        }
        cout << max_count << endl;
    }
    return 0;
}
