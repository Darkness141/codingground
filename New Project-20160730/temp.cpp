#include <iostream>

using namespace std;

int main()
{
   int temp;
   cout << "Please enter your temperature  ";
   cin >> temp;
   switch(temp) {
       case 0 ... 35:
       cout << "Your temperature is too low";
       break;
       case 36 ... 37:
       cout << "Your temperature is normal";
       break;
       case 38 :
       cout << "Your temperature is too high";
       break;
       case 39 ... 40:
       cout << "Your temperature is extremely high";
       break;
       default:
       cout << "You are not human";
       break;
       system("pause");
        
       
   }
}

