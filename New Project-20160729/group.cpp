#include <iostream>

using namespace std;

int main()
{
   int group, number;
   cout << "Please enter your number";
   cin >> number;
   group = (int)(number - 1) / 5 + 1;
   cout << "Your group number is " << group << endl;
   system("pause");
}

