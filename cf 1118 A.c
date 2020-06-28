#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    long long int a,b,c,x,y;
    for(i=0;i<n;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        if(c>=2*b)
            printf("%lld\n",b*a);
        else
        {
            if(a%2==0)
                printf("%lld\n",a*c/2);
            else
            {
                printf("%lld\n",(a/2*c)+b);
            }
        }
    }
    return 0;
}
