#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int test_cases, no_ofBags;

    cin >> test_cases;
    int n;
    int saved_test_cases = test_cases;

    while (test_cases > 0)
    {
        int even_sum=0,odd_sum=0;

        cin >> no_ofBags;
        while (no_ofBags > 0)
        {

            cin >> n;
            if (n%2==0) {
                even_sum+=n;
            }
            else {
                odd_sum+=n;
            }

            no_ofBags--;
        }
        if (even_sum>odd_sum) {
            cout<<"yes"<<endl;
        }
        else {
            cout<<"no"<<endl;
        }


        test_cases--;
    }


    return 0;
}