#include <iostream>
#include <string>

using namespace std;

int main()
{
    int cha[26],length,count;
    string s;
    cout << "Enter a string" << endl;
    cin >> s;
    count = 0;
    for (int i=0;i<26;i++){
        cha[i] = 0;
    }
    length=s.length();
    for (int i=0;i<length;i++){
        if (isalpha(s.at(i))){
            cha[tolower(s.at(i))-'a']++;
            cout << tolower(s.at(i))-'a';
        }
    }
    for (int i=0;i<26;i++){
        if ((cha[i]%2)==1){
            count++;
        }
    }
    if (count <= 1){
        cout << "can loop";
    } else {
        cout << "cannot loop";
    }
    cout << endl;
    for (int i=0;i<26;i++){
        if (cha[i]>0){
            cout << (char)('a'+i)<<":"<<cha[i]<<endl;
        }
    }
}

