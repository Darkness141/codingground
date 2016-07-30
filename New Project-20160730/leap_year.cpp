#include <iostream>

using namespace std;

int main()
{
  int year;
  cout << "Please enter the year";
  cin >> year;
  if ((year % 4)!=0) {
      cout << "It is not a leap year" << endl;
  } else if (((year % 100)==0) && ((year % 400)!=0)){
      cout << "It is not a leap year" << endl;
  } else if ((year % 400)==0) {
      cout << "It is a leap year" << endl;
  } else {
      cout << "It is a leap year" << endl;
  }
}

