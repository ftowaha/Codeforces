#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int n,v,i,j,m;
    scanf("%lld %lld",&n,&v);
    int ans[n],k,x=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&m);
        k=0;
        long long int A[m];
        for(j=0;j<m;j++)
        {
            scanf("%lld",&A[j]);
            if(v>A[j])
                k=1;
        }
        if(k==1)
        {
            ans[x]=i+1;
            x++;
        }
    }
    printf("%d\n",x);
    for(i=0;i<x;i++)
        printf("%d ",ans[i]);
    return 0;
}
