#include <bits/stdc++.h>
using namespace std;
#define int long long 

signed main()
{

    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int mean, median;
        cin >> mean >> median;
        int x, y, z;
        int sum = mean * 3;
        y = median;
        z = y + 1;
        x = sum - (y + z);
        if (mean <= median)
        {

            cout << x << " " << y << " " << z << endl;
        }

        else 
        {
            cout << y << " "<< y <<" "<< x+1 <<endl; 
        }
    }

    return 0;
}
