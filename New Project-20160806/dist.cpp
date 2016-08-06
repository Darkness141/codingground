#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1, x2, y1, y2, dist;
    cout << "Etner x1, x2, y1, y2  ";
    cin >> x1 >> x2 >> y1 >> y2;
    dist = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    cout << "The distance is " << dist << endl;
    system("pause");
    
}

