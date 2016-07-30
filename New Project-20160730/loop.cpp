#include <iostream>

using namespace std;

int main()
{
   int sum;
   for (int i=1;i<=10;i=i+1){
       sum = 0;
       for(int j=1;j<i;j=j+1){
           cout << "first value of i: " << i <<endl;
           cout << "first value of j: " << j <<endl;
           if ((i%j)==0){
               sum = sum+j;
               cout << "value of i: " << i <<endl;
               cout << "value of j: " << j <<endl;
               cout << "value of sum: " << sum << endl;
           }
       }
       if (sum == i){
           cout << i << "is a complete number" << endl;
       }
   }
   system("pause");
}

