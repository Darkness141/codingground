#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int prize[6];
    int repeat[48];
    int pz, count = 1;
    srand(time(NULL));
    for (int i=1; i<48; i++){
        repeat[i]=0;
    }
    while (count < 7){
        pz = rand()%48 + 1;
        if (repeat[pz]==0) {
            repeat[pz] = 1;
            prize[count - 1] = pz;
            count ++;
        }else {
            continue;
        }
        
    }
    for (int i; i<6;i++){
        cout << "The " << i + 1 << " number is" << prize[i] << endl;
    }
    system("pause");
   
}

