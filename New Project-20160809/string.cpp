#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s;
    char *cstr[5],*substr;
    for (int i=0;i<5;i++){
        cstr[i] = new char[101];
        cout << "Enter the " << i+ 1 << " number  ";
        cin >> s;
        strcpy(cstr[i],s.c_str());
    }
    substr = new char[101];
    cout << "Enter the word you want to search  ";
    cin >> s;
    strcpy(substr,s.c_str());
    for (int i=0;i<5;i++){
        if (strstr(cstr[i],substr) > 0){
            cout << cstr[i] << endl;
        }
    }
    for (int i=0;i<5;i++){
        delete[] cstr[i];
    }
    delete[] substr;
    system("pause");
    

}
