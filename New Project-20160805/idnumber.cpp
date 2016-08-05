#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter your id number";
    cin >> str;
    if (str.at(1)=='1'){
        cout << "Male" << endl;
    } else if (str.at(1)=='2'){
        cout << "Female" << endl;
    } else{
        cout << "Not found" << endl;
    }
    
   
}

