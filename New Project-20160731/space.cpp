#include <iostream>

using namespace std;

int main()
{
   int num[101], n;
   num[1] = 2;
   for (int i=2; i < 101; i++){
       num[i] = num[i- 1]+(i*i - i + 2)/2;
   }
   cout << "Please enter the value of n  ";
   cin >> n;
   cout << "The value of the space is " << num[n] << endl;
   system("pause");
}

