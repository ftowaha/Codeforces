#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k,l;
    scanf("%d",&n);
    for(i=9;i>=1;i--)
    {
        if(n==1)
        {
            k=1;
            l=1;
            break;
        }
        else if(n%i==0&&n!=i)
        {
            k=i;
            l=n/i;
            break;
        }
    }
    printf("%d\n",l);
    for(i=0;i<l;i++)
        printf("%d ",k);
        return 0;
}
