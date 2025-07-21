#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define into long long
into factorial(into n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    into a, b, ANS;
    cin >> a >> b;
    if ((a > 90) && (b > 90))
    {
        into last_digit_a = a % 10;
        into last_digit_b = b % 10;

        into A, B;
        B = factorial(last_digit_b);
        A = factorial(last_digit_a);

        into res = (B / A);

        ANS = res % 10;
    }
    else
    {
        into res_a, res_b;
        res_b = factorial(b);
        res_a = factorial(a);

        into res = (res_b / res_a);

        ANS = res % 10;
    }
    cout << ANS << endl;

    return 0;
}

//* the right solution (still not accepted)
/*#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    int result = 1;
    for (long long i = a + 1; i <= b; ++i) {
        result *= (i % 10); // only last digit matters
        while (result % 10 == 0) result /= 10; // remove trailing zeros
        result %= 1000000; // prevent overflow (keep it manageable)
    }

    cout << result % 10 << '\n'; // last non-zero digit
    return 0;
}
*/