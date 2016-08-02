#include <iostream>

using namespace std;

int main()
{
   int A[5]={60,90,44,98,50};
   int max = A[0], max_index;
   for (int i=0;i<5;i++){
       cout << "A[" << i << "]=" << A[i] << endl;
   }
   for (int i=1;i<5;i++){
       if (max < A[i]) {
           max = A[i];
           max_index = i+1;
       }
   }
   cout << "The max index is " << max_index << endl;
   cout << "The max value is " << max << endl;
   system("pause");
}

