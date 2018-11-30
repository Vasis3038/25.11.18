//Напишите переборную программу программу, вычисляющую значение функции Эйлера для числа n. Программа должна работать не более чем за O(n* log n) шагов.

#include <iostream>

using namespace std;

Euler int (int n){
    int p = 1;
    int ans = 1;
    for (int i = 2; i<= n;){
        if (n%i == 0){
                if(i == p){ ans= ans*p;}
                else
                {
                ans = ans*(i - 1);
                p = i;
                }
        n = n / i;
        }
        else
        {
            i++;}

    }
    return ans;


}
int main()
{
    int n;
    cin >> n;
    cout << Euler(n);
    return 0;
}
