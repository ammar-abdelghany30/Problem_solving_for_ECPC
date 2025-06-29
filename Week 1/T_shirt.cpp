// #include <filesystem>
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{

    long double no_ranked_A, rank_B, rand_chosen, x;
    long double probability_getting_shirt;
    cin >> no_ranked_A >> rank_B >> rand_chosen >> x;

    if (x <= no_ranked_A)
    {
        probability_getting_shirt = 1.0;
    }

    else if (x > rank_B)
    {
        probability_getting_shirt = 0.0;
    }

    else
    {

        probability_getting_shirt = (rand_chosen) / (rank_B - no_ranked_A);
    }

    cout << probability_getting_shirt << endl;

    return 0;
}
