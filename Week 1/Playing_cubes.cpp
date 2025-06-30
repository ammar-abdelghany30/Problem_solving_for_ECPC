#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int red_cubes,blue_cubes;

    cin>>red_cubes>>blue_cubes;

    int petay_points = max(red_cubes,blue_cubes) -1 ;
    int vasay_points = min(red_cubes,blue_cubes);

cout<<petay_points<<" "<<vasay_points<<endl;


}
