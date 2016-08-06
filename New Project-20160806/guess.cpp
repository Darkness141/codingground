#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int count = 0;
    int target[4]; 
    target[count] = rand()%10;
    count = count + 1;
    string guess;
    int A, B, gs[4];
    while (count<4){
        target[count] = rand()%10;
        count = count + 1;
        for (int j=0;j<count- 1;j++){
            if (target[j]==target[count- 1]){
                count = count - 1;
                break;
            }
        }
    }
    for (int k=0;k<4;k++){
        cout << target[k];
    }
    while (1){
        A = 0;B = 0;
        cout << "Enter a four digit number  ";
        cin >> guess;
        for (int i=0;i<4;i++){
            gs[i] = guess.at(i)-'0';
            if (target[i]==gs[i]){
                A++;
            }
        }
        for (int i=0;i<4;i++){
            for (int j=0;j<4;j++){
                if (target[i]==gs[j]){
                    B++;
                }
            }
        }
        B = B - A;
        cout << A << "A" << B << "B" << endl;
        if (A==4){
            break;
        }
    }
    system("pause");
}
