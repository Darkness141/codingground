#include <iostream>

using namespace std;

int main()
{
    int k = 1,i = 1;
    while (i<10){
        for (int j=k;j<10;j++){
            cout << j;
        }
        for (int j=1;j<=i;j++){
            cout << j;
        }
        cout << endl;
        k = k + 1;
        i = i + 1;
        
    }
   
}

