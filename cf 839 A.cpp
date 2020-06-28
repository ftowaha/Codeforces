#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,a,b,k=0,i,l=0,x=0;
    scanf("%d %d",&n,&a);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b);
        if(a>0)
            k++;
        if(b>=8)
        {
            l=l+b-8;
            b=8;
        }
        else if(b<8)
        {
            x=8-b;
            if(l>=x)
            {
                b=8;
                l=l-x;
            }
            else
            {
                b=b+l;
                l=0;
            }
        }
         a=a-b;
    }
    if(a>0)
        printf("-1\n");
    else
    printf("%d\n",k);
}
