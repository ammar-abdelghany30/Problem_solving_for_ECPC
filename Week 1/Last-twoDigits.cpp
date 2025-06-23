#include <bits/stdc++.h>
using namespace std;

int main() {
    int N ;
    cin>>N;
    if ((N>=100)&&(N<=999)) {

        N%=100;

        cout << setfill('0') << setw(2) << N << endl;

    }
    else{return 0;}


    return 0;
}//
// Created by mocam on 6/23/2025.
//
