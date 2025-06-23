#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int result;
    if (n % 2 == 0) {
        // For even n: n/2
        result = n/2;
    } else {
        // For odd n: (n-1)/2 - n
        result = (n-1)/2 - n;
    }

    cout << result << endl;
    return 0;
}