#include<stdio.h>
int main()
{
    int n,i;
    long long int a,b,k,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld %lld",&a,&b);
        l=(a*b)%(a-1);
        k=(a*b)/(a-1);
        if(l==0)
            k--;
        printf("%lld\n",k);
    }
    return 0;
}
