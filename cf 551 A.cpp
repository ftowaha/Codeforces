#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,j,x;
    scanf("%d",&n);
    int A[n],B[n];
    for(i=0;i<n;i++)
    {
       scanf("%d",&A[i]);
       B[i]=A[i];
    }
    sort(B,B+n);
    for(i=0;i<n;i++)
    {
     for(j=n-1;j>=0;j--)
        if(A[i]==B[j])
        {
            x=j;
            break;
        }
        printf("%d\n",n-x);
    }
    return 0;
}
