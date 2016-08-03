#include <iostream>

using namespace std;
int num(int);

int main()
{
   int n, result;
   cout << "Please enter the value of n  ";
   cin >> n;
   result = num(n);
   cout << n << " lines can cut a plate into " << result << " parts"<< endl;
   system("pause");
}

int num(int n){
    int re;
    if (n==1){
        re = 2;
    } else {
        re = n + num(n- 1);
    }
    return re;
}

