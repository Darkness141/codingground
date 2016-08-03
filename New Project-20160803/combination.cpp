#include <iostream>

using namespace std;

int C(int, int);
int main()
{
   int m, n, result;
   cout << "Enter the value of m  ";
   cin >> m;
   cout << "Enter the value of n  ";
   cin >> n;
   result = C(m,n);
   cout << "The combination is " << result << endl;
   system("pause");
}
int C(int m, int n){
    int re;
    if ((n==0)||(m==n)){
        re = 1;
    } else{
        re = C(m- 1,n)+C(m- 1,n- 1);
    }
    return re;
    
}
