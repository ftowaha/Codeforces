#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a,b,c;
    scanf("%d %d",&n,&k);
    a=2*n/k;
    b=5*n/k;
    c=8*n/k;
    if((n*2)%k!=0)
        a++;
    if((n*5)%k!=0)
        b++;
    if((n*8)%k!=0)
        c++;
    c=a+b+c;
    printf("%d\n",c);
    return 0;
}
