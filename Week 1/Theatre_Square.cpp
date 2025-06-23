#include <chrono>
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {

    int n,m,a;
    cin>>n>>m>>a;

    double width=(double)n/a;
    double length=(double)m/a;
    cout<<width<<" "<<length<<endl;

    long long width_palata=ceil(width);
    long long length_palata=ceil(length);
    cout<<width_palata<<" "<<length_palata<<endl;

    long long total_palata=width_palata*length_palata;
    cout<<total_palata<<endl;



    return 0;

}

//
// Created by mocam on 6/23/2025.
//
