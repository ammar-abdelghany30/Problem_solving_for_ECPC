#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int testcases, n, a;

    cin >> testcases;
    while (testcases--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            arr[i] = a;
        }

        sort(arr, arr + n);
        arr[0]++;
        long product = 1;

        for (int i = 0; i < n; i++)
        {
            product *= arr[i];
        }

        cout << product << endl;
    }

    return 0;
}