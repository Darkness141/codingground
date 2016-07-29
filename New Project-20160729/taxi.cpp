#include <iostream>

using namespace std;

int main()
{
   double dist;
   int money;
   cout << "Please enter the distance  ";
   cin >> dist;
   money = (int) ((dist - 1.25)/0.25)*5 + 70;
   cout << "The fee is " << money << endl;
   system("pause");
}
