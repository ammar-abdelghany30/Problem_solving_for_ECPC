#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    double total_dis,harry_vel,x_vel;
    cin>>total_dis>>harry_vel>>x_vel;
    double relative_vel = harry_vel + x_vel ; // because it's always opposite to each other

    double time = total_dis/relative_vel ;
    double harry_dis = time * harry_vel ;
    cout<<harry_dis<<endl;
    return 0;
}
