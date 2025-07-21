
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
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        pre[i] = pre[i - 1] + x;
    }
    int res=0;
    for (int i = 1; i <= n-1; i++)
    {

      if(pre[n]-pre[i]==pre[i])
      {
        res++;
      }

    }
    cout<<res<<endl;

    return 0;
}
