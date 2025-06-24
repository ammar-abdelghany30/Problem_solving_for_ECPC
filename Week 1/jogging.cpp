#include <filesystem>
#include<iostream>
#include <cstdlib>
using namespace std;
int main(){
    int distance_taka,distance_aoki;
    int time_taka_run,vel_taka,taka_rest;
    int time_aoki_run,vel_aoki,aoki_rest;

    int X;

    cin>>time_taka_run>>vel_taka>>taka_rest>>time_aoki_run>>vel_aoki>>aoki_rest>>X;

    int step1_0 = X - time_taka_run;
    int step1_1 = X - time_aoki_run;

    int step2_0 = step1_0 - taka_rest;
    int step2_1 = step1_1 - aoki_rest;

    if (step1_0%taka_rest==0) {
         distance_taka = (vel_taka*step2_0)+(vel_taka*time_taka_run);
    }
    else {
         distance_taka=(time_taka_run*vel_taka);
    }



    if (step1_1%aoki_rest==0) {
         distance_aoki = (vel_aoki*step2_1)+(vel_aoki*time_aoki_run);
    }
    else {
         distance_aoki=(time_aoki_run*vel_aoki);
    }

    if (distance_taka>distance_aoki) {
         cout<<"Takahashi"<<endl;
    }
     else if (distance_aoki>distance_taka)
     {
          cout<<"Aoki"<<endl;
     }

     else if (distance_taka==distance_aoki){
          cout<<"Draw"<<endl;
     }

    return 0;


}
