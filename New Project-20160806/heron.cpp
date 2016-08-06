#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    double s, area;
    cout << "Enter the value of a, b, c  ";
    cin >> a >> b >> c;
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout << "The area is " << area << endl;
    system("pause");
    
}

