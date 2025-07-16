#include <iostream>
using namespace std;
int main()
{

    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        long long n;
        cin >> n;
        long long a[n];
        long long b[n];
        long long sum_a = 0;
        long long sum_b = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum_a += a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            sum_b += b[i];
        }

        if (sum_a == sum_b)
        {
            long long ans = 0;
            for (int i = 0; i < n; i++)
            {
                if (b[i] > a[i])
                {
                    ans += b[i] - a[i];
                }
                
            }
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}