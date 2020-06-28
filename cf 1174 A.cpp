#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,a;
    scanf("%d",&n);
    a=2*n;
    int A[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&A[i]);
    }
    sort(A,A+a);
    long long int x=0,y=0;
    for(i=0;i<n;i++)
     x=x+A[i];
    for(i=n;i<a;i++)
     y=y+A[i];
     if(x==y)
        printf("-1\n");
     else
        for(i=0;i<a;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}
