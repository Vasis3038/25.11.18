# 25.11.18
//Напишите программу, находящую все простые числа Софи Жермен не превосходящие n. Программа должна работать не более чем за O(n*log log n) шагов.

#include <iostream>

using namespace std;

int main()
{
 int n;
 cin >> n;
 bool A[2*n+1];
 for (int y = 0; y<2*n+1; y++) A[y]=0;

 for (int i = 2; i<2*n+1; i++){
        if (i*i>2*n+1) break;
    for(long g = i*i; g<=2*n+1; g = g+i){
        A[g]=1;
    }
 }
    for (int i=2; i<=n; i++){
        if (A[i] == 0){
                if (A[2*i+1]==0){
                    cout << i<< endl;}}
    }
    return 0;
}
