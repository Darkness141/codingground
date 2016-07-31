#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
   int num[40];
   int count = 0, mean = 0;
   srand(time(NULL));
   for (int i=0;i<40;i++){
       num[i] = rand()%101;
       cout << "The " << i << " number is " << num[i] << endl;
       mean = mean + num[i];
   }
   cout << "The mean is " << mean/40 << endl;
   for (int i=0;i<40;i++){
       if (num[i]<(mean/40)){
           count = count + 1;
       } 
   }
   cout << "The total number of numbers which is higher than the mean are " << count << endl;
   system("pause");
   
}
