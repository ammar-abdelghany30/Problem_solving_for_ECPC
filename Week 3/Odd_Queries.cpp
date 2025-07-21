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

        int n, no_of_queries;
        cin >> n >> no_of_queries;
        int arr[n + 10] = {0};
        int pref[n + 10] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            pref[i + 1] = pref[i] + arr[i];
        }
        while (no_of_queries--)
        {
            int k, right, left;
            cin >> left >> right>> k;

            int res = pref[n]-(pref[right]-pref[left-1]+((right-left+1)*k));
            if(res%2!=0)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }


        }
    }

    return 0;
}
