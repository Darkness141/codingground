#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
   int score[40];
   int count = 0;
   srand(time(NULL));
   for (int i=0; i<40;i++){
       score[i]=rand()%101;
       cout << "The " << i + 1 << " student's score is " << score[i] << endl;
   }
   for (int i=0; i<40;i++){
       if (score[i] < 60){
           count = count + 1;
       }
   }
   cout << "The number of students who failed is " << count;
   system("pause");
   
}

