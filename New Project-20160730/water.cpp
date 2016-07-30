#include <iostream>

using namespace std;

int main()
{
   int water;
   cout << "Enter the water usage index";
   cin >> water;
   switch(water){
       case 1 ... 10:
       cout << "The amount you need to pay is " << water*7.35 <<endl;
       break;
       case 11 ... 30:
       cout << "The amount you need to pay is " << water*9.45 - 21 << endl;
       break;
       case 31 ... 50:
       cout << "The amount you need to pay is " << water *11.55 -84 << endl;
       break;
       default:
       cout << "The amount you need to pay is " << water*12.075 -110.25 << endl;
       break;
       system("pause");
   }
}
