#include<stdio.h>
int main()
{
    int n,i,m=0;
    long long int a,x=0,k=0,y=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a);
        if(a%2!=0&&m==0)
        {
            x=a;
            m++;
        }
        if(a%2!=0)
            {
                if(a<x)
                    x=a;
            }
        k=k+a;
    }
    if(k%2!=0)
        k=k-x;
    printf("%lld\n",k);
    return 0;
}
