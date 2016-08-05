#include <iostream>

using namespace std;

int main()
{
   int i = 1;
   while (i<1000){
       for (int j=0;j<=i;j++){
           for (int k=0;k<=i;k++){
               if (j*j+k*k+k*j==i){
                   cout << i << ", ";
               }
           }
       }
       i = i + 1;
   }
}

