#include <iostream>
using namespace std;
int main()
{

    int a,b;
    cin >> a >> b;
    int n = 0;
    for (n = a; n <= b; n++)
    {

        if  (1 <= n && n <= 9) 
        {

            switch (n)
            {
            case 0:
                cout << "zero"<<endl;
                break;
            case 1:
                cout << "one"<<endl;
                break;
            case 2:
                cout << "two"<<endl;
                break;
            case 3:
                cout << "three"<<endl;
                break;
            case 4:
                cout << "four"<<endl;
                break;
            case 5:
                cout << "five"<<endl;
                break;
            case 6:
                cout << "six"<<endl;
                break;
            case 7:
                cout << "seven"<<endl;
                break;
            case 8:
                cout << "eight"<<endl;
                break;
            case 9:
                cout << "nine"<<endl;
                break;
            default:
                break;
            }
        }

        else if (n % 2 == 0)
        {
            cout << "even" << endl;
        }

        else
        {
            cout << "odd" << endl;
        }

        
    }
     return 0;
}