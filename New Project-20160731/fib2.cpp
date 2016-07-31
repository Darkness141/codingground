#include <iostream>

using namespace std;

int main()
{
   int first = 0, second = 1, next, n;
   cout << "Enter the number of terms";
   cin >> n;
   cout << "Fib sequence: " << first << " " << second << " ";
   for (int i=1;i<n;i=i + 1){
       next = first + second;
       cout << next << " ";
       first = second;
       second = next;
   }
   return 0;
   system("pause");
   
}

