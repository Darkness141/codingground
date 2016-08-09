#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
void add(int*,int*,int*, int);
int main()
{
    int *a, *b, *c;
    a = new int[5];
    b = new int[5];
    c = new int[5];
    srand(time(NULL));
    for (int i=0;i<5;i++){
        a[i] = rand()%101;
        b[i] = rand()%101;
    }
    cout << "Original matrix a:" << endl;
    for (int i=0;i<5;i++){
        cout << "a[" << i << "]=" << a[i] << endl; 
    }
    cout << "Original matrix b:" << endl;
    for (int i=0;i<5;i++){
        cout << "b[" << i << "]=" << b[i] << endl;
    }
    add(a,b,c,5);
    cout << "Matrix c:" << endl;
    for (int i=0;i<5;i++){
        cout << "c[" << i << "]=" << c[i] << endl;
    }
    delete[] a;
    delete[] b;
    delete[] c;
}
void add(int *x, int *y, int *z, int n){
    for (int i=0;i<n;i++){
        *(z+i)=*(x+i)+*(y+i);
    }
}
