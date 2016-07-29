#include <iostream>

using namespace std;

int main()
{
   int cost, amount;
   cout << "Please enter the cost  ";
   cin >> cost;
   if (cost >= 2000) {
       amount = cost * 0.9;
   } else {
       amount = cost;
   }
   cout << "The total amount is " << amount << endl;
   system("pause");
}
