#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        int n;
        int position[2] = {0, 0};
        bool flag = false;
        string s;
        cin >> n >> s; 

        // Check initial position (0, 0)
        if (position[0] == 1 && position[1] == 1) {
            flag = true;
        }

        for (int i = 0; i < n && !flag; i++) {
            char dirc = s[i];
            if (dirc == 'U') {
                position[1]++;
            } else if (dirc == 'D') {
                position[1]--;
            } else if (dirc == 'R') {
                position[0]++;
            } else if (dirc == 'L') {
                position[0]--;
            }

            

            if (position[0] == 1 && position[1] == 1) {
                flag = true;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}