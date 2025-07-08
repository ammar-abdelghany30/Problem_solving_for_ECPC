#include <iostream>
using namespace std;

int main()
{

    int no_of_groups;
    int no_of_TAXIs = 0;
    int ones_count = 0, twos_count = 0, threes_count = 0, fours_count = 0;
    cin >> no_of_groups;
    while (no_of_groups--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            ones_count++;
        }
        else if (n == 2)
        {
            twos_count++;
        }

        else if (n == 3)
        {
            threes_count++;
        }
        else if (n == 4)
        {
            fours_count++;
        }
    }

    no_of_TAXIs += fours_count;
    while ((threes_count != 0) && (ones_count != 0))
    {
        threes_count--;
        ones_count--;
        no_of_TAXIs++;
    }

    if ((threes_count != 0) && (ones_count == 0))
    {
        no_of_TAXIs += threes_count;
        threes_count = 0;
    }

    no_of_TAXIs += twos_count / 2;

    if (twos_count % 2 != 0)
    {
        if (ones_count <= 2)
        {
            twos_count = 0;
            ones_count = 0;
        }
        else
        {
            ones_count = ones_count - 2;
            twos_count = 0;
        }
        no_of_TAXIs++;
    }
    if (ones_count != 0)
    {
        no_of_TAXIs = no_of_TAXIs + (ones_count / 4);
        if (ones_count % 4 != 0)
        {
            no_of_TAXIs++;
        }
    }

    cout << no_of_TAXIs << endl;

    return 0;
}