#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   int mark;
   cout << "Please enter your mark";
   cin >> mark;
   switch(mark){
       case 0 ... 59:
       cout << "You get E grade " << endl;
       break;
       case 60 ... 69:
       cout << "You get D grade " << endl;
       break;
       case 70 ... 79:
       cout << "You get C grade " << endl;
       break;
       case 80 ... 89:
       cout << "You get B grade " << endl;
       break;
       default:
       cout << "You get A grade " << endl;
       break;
       system("pause");
   }
}
