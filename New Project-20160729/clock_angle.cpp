#include <iostream>

using namespace std;

int main()
{
   int hour, minute;
   float angle1, angle2, angle;
   cout << "Please enter the hour  ";
   cin >> hour;
   cout << "Please enter the minute  ";
   cin >> minute;
   angle1 = hour*30 + minute*0.5;
   angle2 = minute*6;
   angle = angle1 - angle2;
   cout << "The angle between hour and minute is " << angle << endl;
   system("pause");
   
}

