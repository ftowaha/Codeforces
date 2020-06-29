#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    char A[1000];
    long long int a,b,n,i;
    int k=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s %lld %lld",&A,&a,&b);
        if(a>=2400&&b>a)
            k=1;
    }
    if(k==1)
        printf("YES\n");
    else printf("NO\n");
    return 0;
}
