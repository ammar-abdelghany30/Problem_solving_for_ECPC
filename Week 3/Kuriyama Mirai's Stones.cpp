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
    int n;
    cin >> n;
    int sorted_arr[n + 5] = {0};
    int Nsorted_arr[n + 5] = {0};
    int arr[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        Nsorted_arr[i + 1] = Nsorted_arr[i] + arr[i];
    }

    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        sorted_arr[i + 1] = sorted_arr[i] + arr[i];
    }
    int x;
    cin >> x;
    while (x--)
    {   int type,right,left;
        cin >> type >> left >> right;
        if (type == 1)
        {
            cout << Nsorted_arr[right] - Nsorted_arr[left - 1] << endl;
        }
        else
        {
            cout << sorted_arr[right] - sorted_arr[left - 1] << endl;
        }
    }
    return 0;
}
