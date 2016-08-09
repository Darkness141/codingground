#include <iostream>
#include <cstring>
using namespace std;
int str_cmp(char *,char *);
int main()
{
    string s;
    char *cstr1, *cstr2;
    int result;
    cstr1 = new char[101];
    cstr2 = new char[101];
    cout << "Enter a string  ";
    cin >> s;
    strcpy(cstr1,s.c_str());
    cout << "Enter a string  ";
    cin >> s;
    strcpy(cstr2,s.c_str());
    result = str_cmp(cstr1,cstr2);
    cout << "The result is " << result << endl;
    delete[] cstr1;
    delete[] cstr2;
    
    
}
int str_cmp(char *str1, char *str2){
    int n1, n2;
    n1 = strlen(str1);
    n2 = strlen(str2);
    if (n1<n2){
        n1 = n2;
    }
    for (int i;i<n1;i++){
        if (str1[i]!=str2[i]){
            if (str1[i]>str2[i]){
                return 1;
            } else{
                return -1;
            }
        }
        if ((i==(n1-1))&&(str1[i]==str2[i])){
            return 0;
        }
    }
}
