#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    string my_str;
    cin >> my_str;
    int n = my_str.length();
    int substring_count=0;
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while((j<n-1)&&(my_str[j]==my_str[j+1]))
        {
            j++;
        }
        substring_count=max(substring_count,j-i+1);
        i=j;


    }
    cout<<substring_count<<endl;

    return 0;
}