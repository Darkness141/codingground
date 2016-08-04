#include <iostream>

using namespace std;

int main()
{
   int i, *p;
   i = 10;
   p = &i;
   cout << "*p: " << *p << endl;
   cout << "p: " << p << endl;
   cout << "&i: " << &i << endl;
   cout << "i: " << i << endl;
   system("pause");
}

