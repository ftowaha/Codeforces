#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,k=0,l=1;
    int i;
    scanf("%lld",&n);
    for(i=1;i<n;i++)
    {
       k=i*4;
       l=l+k;
    }
    printf("%lld\n",l);
    return 0;
}
