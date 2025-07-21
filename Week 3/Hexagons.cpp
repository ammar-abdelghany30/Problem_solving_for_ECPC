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

    int n, res;
    cin >> n;
    int sum_n = 0;
    if (n == 0)
    {
        res = 1;
    }
    else if (n == 1)
    {
        res = 7;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            sum_n += i;
        }

        res = (6 * (sum_n)) + 1;
    }
    cout << res << endl;

    return 0;
}

//*another smart solution (both are valid but me solution is a little bit slow)

/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define int long long
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n, res;
    cin>>n;
    res = (((n+1)*n*6)/2)+1;
    
    cout<<res<<endl;
 
    return 0;
}*/
