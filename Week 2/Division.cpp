#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int test_cases, n;
    cin >> test_cases;
    int saving_test_cases = test_cases;
   
    vector<int> myVector;
    while (test_cases > 0)
    {
        
        cin >> n;
        myVector.push_back(n);

        test_cases--;
    }

    for (int i = 0; i < saving_test_cases; i++)
    {

        if (myVector[i] >= 1900)
        {
            cout << "Division 1" << endl;
        }

        else if ((myVector[i] <= 1899) && (myVector[i] >= 1600))
        {
            cout << "Division 2" << endl;
        }

        else if ((myVector[i] <= 1599) && (myVector[i] >= 1400))
        {
            cout << "Division 3" << endl;
        }

        else if (myVector[i] <= 1399)
        {
            cout << "Division 4" << endl;
        }
    }

    return 0;
}