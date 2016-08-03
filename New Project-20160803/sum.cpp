#include <iostream>

using namespace std;
int sum(int);
int main()
{
    int n, result;
    cout << "Enter the value of n  ";
    cin >> n;
    result = sum(n);
    cout << "The sum is " << result << endl;
    system("pause");
}
int sum(int n){
    int re;
    if (n==1){
        re = 1;
    } else {
        re = sum(n- 1)+n;
    }
    return re;
}
    
