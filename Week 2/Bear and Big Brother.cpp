#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int limak_weight, bob_weight, years=0;
    cin >> limak_weight >> bob_weight;

    while (limak_weight <= bob_weight)
    {
        years++;
        limak_weight *= 3;
        bob_weight *= 2;

        //years++;
    }

    cout << years << endl;

    return 0;
}