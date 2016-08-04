#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a = "There is no spoon";
    cout << a << endl;
    string *b = &a;
    cout << b << endl;
    string &c = a;
    cout << c << endl;
    string *d = new string("There is spoon");
    cout << d << endl;
    return 0;
}

