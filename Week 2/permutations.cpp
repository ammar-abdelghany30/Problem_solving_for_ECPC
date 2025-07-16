#include <bits/stdc++.h>
using namespace std;
#define int long long 

signed main()
{
    int n;
    cin>>n;
    vector<int>v;
    if(n==1)
    {
        cout<<1<<endl;
        return 0;
    }
    else if(n<4)
    {
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }

    for(int i=2;i<=n;i=i+2)
    {   
        
            v.push_back(i);
        

    }
    
    for(int i=1;i<=n;i+=2)
    {   
        
            v.push_back(i);
        

    }
    
    for(int i=0;i<v.size();i++)
    {   
        cout<<v[i]<<" ";

    }

    return 0;
}
