#include <iostream>

using namespace std;
void swap(int *, int *);
int main()
{
    int a=10,b=20;
    swap(&a, &b);
    cout << "a=" << a << ",b=" << b;
    system("pause");
}
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
