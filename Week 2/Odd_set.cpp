#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int testcases, n, a;

    cin >> testcases;
    while (testcases > 0)
    {
        int even_sum = 0, odd_sum = 0;
        cin >> n;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a;
            if (a % 2 == 0)
            {
                even_sum += 1;
            }
            else
            {
                odd_sum += 1;
            }
        }
        if (even_sum == odd_sum)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }

        testcases--;
    }

    return 0;
}