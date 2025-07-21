
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

    string s;
    cin >> s;
    int N = s.length();
    int ncount = 0, icount = 0, ecount = 0, tcount = 0;
    vector<int> freq(4, 0);
    for (int i = 0; i < N; i++)
    {
        if (s[i] == 'n')
        {
            freq[0]++;
            
        }
        else if (s[i] == 'i')
        {
            freq[1]++;

            
        }

        else if (s[i] == 'e')
        {
            freq[2]++;
            
        }
        else if (s[i] == 't')
        {
            freq[3]++;
           
        }
    }

    int nineteens_count = 0;
    ncount=freq[0];
    icount=freq[1];
    ecount=freq[2];
    tcount=freq[3];

    int n = (ncount - 1)/2;
    int i = (icount);
    int e = (ecount)/3;
    int t = (tcount);

    nineteens_count = min(min(n,t), min(i,e));

    cout << nineteens_count << endl;

    return 0;
}
