#include <iostream>
using namespace std;

long long reverse_number(long long number) {
    long long reversed = 0;
    while (number > 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }
    return reversed;
}

int main() {
    int testcases;
    cin >> testcases;
    while (testcases--) {
        long long no1, no2;
        cin >> no1 >> no2;
        
        long long reversed_no1 = reverse_number(no1);
        long long reversed_no2 = reverse_number(no2);
        
        long long sum = reversed_no1 + reversed_no2;
        long long result = reverse_number(sum);
        
        cout << result << endl;
    }
    return 0;
}