#include<stdio.h>
int main()
{
    int n,i;
    long long int a,b,c,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a>=b&&a>=c)
        {
            x=b+c;
            if(a-1<=x)
            printf("YES\n");
        else printf("NO\n");
        }
        else if(b>=a&&b>=c)
        {
            x=a+c;
            if(b-1<=x)
            printf("YES\n");
        else printf("NO\n");
        }
        else if(c>=b&&c>=a)
        {
            x=a+b;
            if(c-1<=x)
            printf("YES\n");
        else printf("NO\n");
        }
    }
    return 0;
}
