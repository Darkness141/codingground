#include <iostream>
using namespace std;
int main(){
    double money, interest, r1, r2, r3;
    cout << "Please enter the money";
    cin >> money;
    cout << "Please enter the interest";
    cin >> interest;
    r1 = money*(1+interest/100);
    r2 = r1*(1+interest/100);
    r3 = r2*(1+interest/100);
    cout << "First year amount " << r1 << endl;
    cout << "Second year amount " << r2 <<endl;
    cout << "Third year amount " << r3 << endl;
    system("pause");
    
    
}