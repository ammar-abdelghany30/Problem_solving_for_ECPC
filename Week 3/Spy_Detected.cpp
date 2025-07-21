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
    cin>>testcases;
    while(testcases--)
    {
        int n;
        cin>>n;
        int arr[n+5];
        int freq[105]={0};
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            freq[arr[i]]++;

        }
        int spy=0,location=0;
        for(int i=1;i<=100;i++)
        {
            if(freq[i]==1)
            {
                spy=i;
                break;
            }
           
        }

        for(int i=0;i<n;i++)
        {
            if(arr[i]==spy)
            {
                location = i+1;
                break;
            }
        }

        cout<<location<<endl;


    }

    return 0; 
}
