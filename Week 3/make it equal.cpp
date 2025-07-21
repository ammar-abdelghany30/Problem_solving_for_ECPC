#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define int long long
#define INF 1e8
// TODO
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k, res;
    cin >> n >> k;
    int freq[10005] = {0};
    vector<int> arr(10005,0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    int min_in_freq = INF;
    int min_in_arr = INF;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min_in_arr)
        {
            min_in_arr = arr[i];
        }

        if (freq[i] < min_in_freq)
        {
            min_in_freq = freq[i];
        }
    }
    if (freq[min_in_arr] == n)
    {
        res = 0;
    }
    else
    {   int max=0;
        int min=INF;
        for (int i = 0; i < n; i++)
        {
            if(freq[i]>max)
            {
                max=freq[i];
            }
           
        }
        for (int i = 0; i < n; i++)
        {
            if(freq[i]<min)
            {
                min=freq[i];
            }
           
        }
        res = max - min ;
    }

    cout<<res<<endl;

    return 0;
}
