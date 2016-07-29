#include <iostream>

using namespace std;

int main()
{
    float ruler, inch;
    double height;
    cout << "Please enter your ruler  ";
    cin >> ruler;
    cout << "Please enter your inch  ";
    cin >> inch;
    height = (ruler*12 + inch)*2.54;
    cout << "Your height is " << height << endl;
    system("pause");
}

