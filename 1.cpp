# 25.11.18
/*Напишите программу, находящую корни уравнения
2018X +2019Y=78487894
эффективным перебором. В комментариях напишите, почему перебор - эффективный*/

#include <iostream>
using namespace std;
int main()
{
int x;
int y=1820;
while(y<=36126)
 {
    x=((78487894-(2019*y))/2018);
      if ((2018*x)+(2019*y)==78487894)
      {
    cout << "x =  "<< x << endl;
    cout << "y =  "<< y << endl;
    cout << " "<<endl;
      }
   y++;
 }
 return 0;
}