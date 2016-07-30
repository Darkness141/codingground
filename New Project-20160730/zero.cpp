#include <iostream>

using namespace std;

int main()
{
   int n, zero, nb;
   cout << "Please enter the value of n";
   cin >> n;
   nb = n;
   zero = 0;
   while ((n/5)>0) {
       zero = zero + n/5;
       n = n/5;
       cout << "value of zero: " << zero << endl;
       cout << "value of n: " << n<< endl ;
   }
   cout << nb << "have" << zero << "zero" << endl;
   system("pause");
}

