#include <iostream>

using namespace std;
int c(int);
int main()
{
    int n, result;
    cout << "Enter the value of n  ";
    cin >> n;
    result = c(n);
    cout << "The number of space can be divided is " << result << endl;
    system("pause");
}
int c(int n){
    int re;
    if (n==1){
        re = 2;
    } else{
        re = c(n- 1)+(n*n - n + 2)/2;
    }
    return re;
}

