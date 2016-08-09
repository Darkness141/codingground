#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s;
    char *cstr;
    int len = 0;
    cstr = new char[100];
    cout << "Enter the string  ";
    cin >> s;
    strcpy(cstr,s.c_str());
    while (*(cstr+len)!='\0'){
        len = len + 1;
    }
    cout << "The length of the string is " << len << endl;
    delete[] cstr;
    system("pause");
}

