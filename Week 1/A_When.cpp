#include <bits/stdc++.h>
using namespace std;

int main() {
    int K;
    cin >> K; // Read the input K


    int totalMinutes = 1260 + K;

    // Calculate hours and minutes
    int hours = totalMinutes / 60;
    int minutes = totalMinutes % 60;

    // Ensure hours and minutes are two digits
    string hh = to_string(hours);
    string mm = (minutes < 10) ? "0" + to_string(minutes) : to_string(minutes);

    // Output in HH:MM format
    cout << hh << ":" << mm << endl;

    return 0;
}