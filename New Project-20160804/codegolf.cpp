#include <iostream>

using namespace std;

int main()
{
    int i=1;
    while (i<10){
        for (int j=1;j<10-i;j=j+ 1){
            cout << " ";
        }
        for (int j=1;j<=i;j++){
            cout << j;
        }
        cout << " x 8 + 1 = ";
        
        for(int m=1;m<=i;m++){
                cout << 10 - m;
        }
        
        cout << endl;
        i = i + 1;
   }
}
