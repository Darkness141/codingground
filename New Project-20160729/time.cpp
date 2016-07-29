#include <iostream>

using namespace std;

int main()
{
   int tw, us;
   cout << "Please enter the time in taiwan  ";
   cin >> tw;
   if ((tw-11)<0) {
       us = tw - 11 + 24;
   }
   else {
       us = tw - 11;
   }
   cout << "The time in US is " << us << endl;
   system("pause");
}

