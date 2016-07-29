#include <iostream>

using namespace std;

int main()
{
   double width, length, area, per;
   cout << "Please enter the width";
   cin >> width;
   cout << "please enter the length";
   cin >> length;
   per = (width + length)*2;
   area = width * length;
   cout << "The perimeter is " << per << endl;
   cout << "The area is " << area << endl;
   system("pause");
  
}

