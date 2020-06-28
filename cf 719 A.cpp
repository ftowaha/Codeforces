#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    if(A[n-1]==0)
        printf("UP\n");
    else if(n==1&&A[0]!=15)
        printf("-1\n");
    else if(A[n-1]==15)
        printf("DOWN\n");
    else if(A[n-2]>A[n-1])
        printf("DOWN\n");
    else printf("UP\n");
    return 0;
}
