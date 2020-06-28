#include<cstdio>
#include<cstring>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    long long int n,m,i,j,a,b,l=0;
    scanf("%lld %lld",&n,&m);
    long long int can[n]={0};
    for(i=0;i<m;i++)
    {
        l=0;
        scanf("%lld",&a);
        for(j=0;j<n-1;j++)
        {
            scanf("%lld",&b);
            if(a>=b)
            {
                l=l;
            }
            else
            {
                l=j+1;
                a=b;
            }
        }
        can[l]++;
    }
    a=0;
    b=0;
    for(i=0;i<n;i++)
    {
        if(can[i]>a)
        {
            b=i+1;
            a=can[i];
        }
    }
    printf("%lld\n",b);
    return 0;
}
