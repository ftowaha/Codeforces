#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    long long int a,b,c,x,y=0,z=0,i,d=0;
    char A[100],B[100],C[100];
    scanf("%lld %lld",&a,&b);
    c=a+b;
    i=0;
    x=0;
    while(a!=0)
    {
        x=a%10;
        a=a/10;
        if(x!=0)
        {
            z=z*10;
            z=z+x;
        }
    }
    a=z;
    z=0;
    while(a!=0)
    {
        x=a%10;
        a=a/10;
        z=z*10;
        z=z+x;
    }
    y=0;
    while(b!=0)
    {
        x=b%10;
        b=b/10;
        if(x!=0)
        {
            y=y*10;
            y=y+x;
        }
    }
    b=y;
    y=0;
    while(b!=0)
    {
        x=b%10;
        b=b/10;
        y=y*10;
        y=y+x;
    }
    d=0;
    while(c!=0)
    {
        x=c%10;
        c=c/10;
        if(x!=0)
        {
            d=d*10;
            d=d+x;
        }
    }
    c=d;
    d=0;
    while(c!=0)
    {
        x=c%10;
        c=c/10;
        d=d*10;
        d=d+x;
    }
    z=z+y;
    if(d==z)
        printf("YES\n");
    else printf("NO\n");
    return 0;
}
