#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    long long int a;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a);
        if(a%2==0)
            a=a-1;
        printf("%lld ",a);
    }
    return 0;
}
