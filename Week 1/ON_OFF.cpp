#include <iostream>
//#include <cstdlib>
using namespace std;
int main()
{

   int light_on, light_off, x;
   cout<<"Enter 3 numbers please:"<<endl;
   cin >> light_on >> light_off >> x;

   if (light_on < light_off)
   {
      if ((x < light_off) && (x >= light_on))
      {
         cout << "Yes" << endl;
      }
      else
      {
         cout << "No" << endl;
      }
   }

   else
   {

      if ((x < light_off) || (x >= light_on))
      {
         cout << "Yes" << endl;
      }

      else
      {
         cout << "No" << endl;
      }
   }


   return 0;
}
