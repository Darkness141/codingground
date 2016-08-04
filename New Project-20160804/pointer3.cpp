#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int *mypointer;
    mypointer = &a;
    *mypointer = 10;
    mypointer = &b;
    *mypointer = 20;
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
    return 0;
}

