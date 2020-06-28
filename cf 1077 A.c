#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    long long int a,b,c,d;
    for(i=0;i<n;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        if(c%2!=0)
            d=(c/2)+1;
        else d=c/2;
        a=a*d;
        c=c/2;
        b=(b*c);
        printf("%lld\n",a-b);
    }
    return 0;
}
