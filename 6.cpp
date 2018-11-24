# 25.11.18
//Напишите программу, находящую все простые числа Ченя не превосходящие n. Программа должна работать не более чем за O(n*log log n) шагов.

#include <iostream>

using namespace std;

int main()
{
    bool flag = 0;
 int n;
 cin >> n;
 bool A[n];
 for (int y = 0; y<=n+2; y++) A[y]=0;

 for (int i = 2; i<n; i++)
 {
    for(long g = i*i; g<=n; g = g+i)
        {
        A[g]=1;
        }
 }
 for (int i=2; i<=n; i++){
        if (A[i] == 0){
            if (A[i+2]==0){cout << i<<" ";}
        else

            for (int r = 2; r<=(i+2)/2; r++){
                    for (int w = 2 ; w<=(i+2)/2; w++)
                    {
                        if(i+2==r*w) {flag = 1; break;}
                    }
            }
    }
    if (flag == 1){cout<<i<<" "; flag = 0;}
    }

    return 0;
}
