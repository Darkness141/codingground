#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
   int A[10], max, tmp;
   srand(time(NULL));
   for (int i=0;i<10;i++){
       A[i] = rand()%100 + 1;
       cout << "A[" << i << "]=" << A[i] <<endl;
   }
   for (int i=9;i>0;i--){
       max = 0;
       for (int j=1;j<=i;j++){
           if (A[max]<A[j]){
               max = j;
           }
       }
       tmp = A[max];
       A[max] = A[i];
       A[i] = tmp;
   }
   cout << "After rearrange" << endl;
   for (int i=0;i<10;i++){
       cout << "A[" << i << "]=" << A[i] << endl;
   }
   system("pause");
}