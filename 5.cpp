//Напишите эффективную процедуру, выписывающую из массива длины n все элементы, у которых произведение ненулевых цифр больше k. В комментариях напишите, почему перебор - эффективный

#include <iostream>

using namespace std;

 int mult (int r){
    int k=1;
    int i = 10;
for ( i; r>0; r = r/10){
    int y = r%i;
    if(y!=0)k = k*y;
}
return k;
}
void f (int a[], int n, int k){
    for (int i = 0; i<n5; i++)
    {
        if ( mult(a[i]) > k) cout << a[i]<< " ";
    }
}

int main()
{
int n;
int k = 15;
cin >> n;
int a[n];
for(int i = 0; i<n; i++) cin >> a[i];
f(a, n, k);
    return 0;
}
