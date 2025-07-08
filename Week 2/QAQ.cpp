#include <iostream>
using namespace std;

int main()
{
    string seq;
    cin>>seq;
    int n=seq.length();
    int no_of_subsequences=0;
    for(int i=0;i<n;i++)
    {   for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if((seq[i]=='Q')&&(seq[j]=='A')&&(seq[k]=='Q'))
                {
                    no_of_subsequences++;
                }
            }
        }
    
    }
    cout<<no_of_subsequences<<endl;
    

    return 0;
}