#include<stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    if((a/b)%2==0)
        printf("NO\n");
    else printf("YES\n");
    return 0;
}
