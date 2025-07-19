#include <iostream>
#include <vector>
using namespace std;
#define ll long long

ll arr[100005];
ll qsum[100005];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        qsum[i] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(i==0)
        {
            qsum[i]=arr[i];
        }
        else
        qsum[i] = qsum[i] + qsum[i - 1];
    }

    ll Q;
    cin >> Q;
    while (Q--)
    {
        ll left, right, res=0;
        cin >> left >> right;
        if (left != 0)
        {
            res = qsum[right] - qsum[left-1];
        }
        else
        {
            res = qsum[right];
        }
        cout<<res<<endl;
    }
}
