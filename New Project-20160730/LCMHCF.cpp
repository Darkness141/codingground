#include <iostream>
#include <string>

using namespace std;

int main()
{
   int a, b, c;
   cout << "Enter the first number  ";
   cin >> a;
   cout << "Enter the second number  ";
   cin >> b;
   c = a * b;
   while (a != b) {
       if (a > b) {
           a = a - b;
           cout << a << endl;
       } else {
           b = b - a;
           cout << b << endl;
       }
       
   }
   cout << "HCF: " << a << endl;
   cout << "LCM: " << c/a << endl;
}

