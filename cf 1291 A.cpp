#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    int n,i,j,k,l,x,y,m,z,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        y=-1;
        scanf("%d",&k);
        char A[k];
        l=0;
        m=-1;
        x=0;
        a=0;
        scanf("%s",&A);
        for(j=k;j>=0;j--)
        {
            z=A[j]-'0';
            if(z%2!=0)
                {
                    m=j;
                    break;
                }
        }
        j=0;
        for(j=0;j<=m;j++)
        {
            x=x+A[j]-'0';
            z=A[j]-'0';
            if(z%2==1)
                y=j;
        }
        if(x==0||(x%2!=0&&y==-1))
            printf("-1");
        else if(x%2==1)
        {
            for(j=0;j<=m;j++)
        {
            if(j!=y)
                printf("%c",A[j]);
        }
        }
        else
        {
            for(j=0;j<=m;j++)
                printf("%c",A[j]);
        }

        printf("\n");
    }
    return 0;
}
