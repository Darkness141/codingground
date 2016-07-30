#include <iostream>

using namespace std;

int main()
{
   int num, result = 1;
   cout << "Enter a number  ";
   cin >> num;
   for (int i= 1;i <= num; i++){
       result = result * i;
       cout << "value of i: " << i << endl;
       cout << "value of result " << result <<endl;
   }
   cout << "The result is "<< result << endl;
   system("pause");
}

