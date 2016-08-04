#include <iostream>

using namespace std;

int main()
{
    int a=5, b=15;
    int *p1, *p2;
    p1 = &a;
    p2 = &b;
    *p1 = 10;
    *p2 = *p1;
    p1 = p2;
    *p1 = 20;
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
    return 0;
    
}
