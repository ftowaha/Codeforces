#include<stdio.h>
int main()
{
    long long int m,n,a,b;
    scanf("%lld %lld %lld",&m,&n,&a);
    if(m%a!=0||n%a!=0)
    {
        if(m%a!=0)
        m=(m/a)+1;
        else m=m/a;
        if(n%a!=0)
        n=(n/a)+1;
        else
            n=n/a;
        b=m*n;
        printf("%lld\n",b);
    }
    else
    {
      m=m/a;
        n=n/a;
        b=m*n;
        printf("%lld\n",b);
    }
    return 0;
}
