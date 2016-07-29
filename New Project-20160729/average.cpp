#include <iostream>

using namespace std;

int main()
{
   float num1, num2, num3, ave;
   cout << "enter your result in the first seminar  ";
   cin >> num1;
   cout << "enter your result in the second seminar  ";
   cin >> num2;
   cout << "enter your result in the third seminar  ";
   cin >> num3;
   ave = (num1 + num2 + num3)/3;
   cout << "The average score is " << ave << endl;
   system ("pause");
   
}

