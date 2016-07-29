#include <iostream>

using namespace std;

int main()
{
   int x, y;
   cout << "Enter the x position";
   cin >> x;
   cout << "Enter the y position";
   cin >> y;
   if (x>0 && y>0){
       cout << "Your position is in region 1";
   }
   if (x<0 && y>0){
       cout << "Your position is in region 2";
   }
   if (x<0 && y<0){
       cout << "Your positoin is in region 3";
   }
   if (x>0 && y<0){
       cout << "Your position is in region 4";
   }
   if (x==0 || y==0){
       cout << "Your position is in the origin";
   }
   system("pause");
}
