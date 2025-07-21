
#include <iostream>
using namespace std;
#define int long long
bool visited[1005];
bool counted[1005];

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int testcases;
    int arr[10000];
    cin >> testcases;
    while (testcases--)
    {
        int n;
        bool printed = true;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < 1001; i++)
        {
            visited[i] = false;
        }
        for (int i = 0; i < 1001; i++)
        {
            counted[i] = false;
        }
        int temp = -1;
        int counter = 0;
        for (int i = 0; i < n; i++)
        {
            if (!visited[arr[i]])
            {
                if (counted[counter])
                {
                    printed = false;
                    break;
                }
                counted[counter] = true;
                visited[arr[i]] = true;
                counter = 1;
                temp = arr[i];
            }
            else if (visited[arr[i]] and arr[i] == temp)
            {
                counter++;
            }
            else
            {
                printed = false;
            }
        }
        if (counted[counter])
        {
            printed = false;

        }
        if(printed==false)
        {
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;

        
    }

    return 0;
}
