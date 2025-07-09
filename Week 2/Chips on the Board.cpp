#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        long long n;
        cin>>n;
        long long a[n], b[n];
        long long sum_of_a = 0, sum_of_b = 0;
        long long x, y;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a[i] = x;
            sum_of_a += x;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> y;
            b[i] = y;
            sum_of_b += y;
        }
        sort(a, a + n);
        sort(b, b + n);

        long long op1 = a[0]*n + (sum_of_b);
        long long op2 = b[0]*n + (sum_of_a);

        long long min_result = min(op1,op2);
        cout<<min_result<<endl;
    }

    return 0;
}