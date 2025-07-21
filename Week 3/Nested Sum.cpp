
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
    vector<int> pre(1e5, 0);
    vector<int> pre1(1e5, 0);
    vector<int> arr(1e5, 0);
    int tests;
    cin >> tests;
    while (tests--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin>>arr[i];
            pre[i]=pre[i-1]+arr[i];
        }

        int total_sum = pre[n];
        for (int i = 1; i <= n; i++)
        {
            
            pre1[i]=pre1[i-1]+(arr[i]*arr[i]);
        }
        int sum_squares = pre1[n];


        int res = 0.5 *((total_sum*total_sum) - (sum_squares)) ;
        cout<<res<<endl;
        
    }

    return 0;
}
