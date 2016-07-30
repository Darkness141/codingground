#include <iostream>

using namespace std;

int main()
{
   int start, end, i=0;
   double n;
   cout << "Enter the beginning value  ";
   cin >> start;
   cout << "Enter the end value  ";
   cin >> end;
   cout << "Enter the interest  ";
   cin >> n;
   while (start < end){
       i = i + 1;
       start = start*(1 + n/100);
       cout << "After " << i << "year, your amount is " << start <<endl;
   }
   system("pause");
}

