#include <iostream>

using namespace std;
int A(int, int);
int main()
{
    int m, n, result;
    cout << "Enter the value of m  ";
    cin >> m;
    cout << "Enter the value of n  ";
    cin >> n;
    result = A(m, n);
    cout << "The result is " << result << endl;
    system("pause");
}
int A(int m, int n){
    int re;
    if (m==0){
        re = n + 1;
    }else if (n==0){
        re = A(m- 1,1);
    }else {
        re = A(m- 1,A(m,n- 1));
    }
    return re;
}
