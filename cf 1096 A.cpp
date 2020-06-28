#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        if(b%a==0&&a*a!=b)
            printf("%d %d",a,b);
        else
        {
            int x=b/a;
            b=a*x;
            printf("%d %d\n",a,b);
        }
        printf("\n");
    }
}
