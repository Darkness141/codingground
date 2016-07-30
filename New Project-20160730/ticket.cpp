#include <iostream>

using namespace std;

int main()
{
   int num;
   cout << "Please enter the number of ticket you want to buy";
   cin >> num;
   switch(num){
       case 0 ... 1:
       cout << "The total amount is " << num*100 << endl;
       break;
       case 2 ... 5:
       cout << "The total amount is " << num*100*0.9 << endl;
       break;
       case 6 ... 10:
       cout << "The total amount is " << num*100*0.8 << endl;
       break;
       case 11 ... 20:
       cout << "The total amount is " << num*100*0.7 << endl;
       break;
       default:
       cout << "The total amount is " << num*100*0.6 << endl;
       break;
       system("pause");
        
   }
}

