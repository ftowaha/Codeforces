#include<cstdio>
using namespace std;
int main()
{
    long long int n,a=1,b=1,c=1,i;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        if(c==i)
        {
            printf("O");
            a=b;
            b=c;
            c=a+b;
        }
        else printf("o");
    }
    printf("\n");
    return 0;
}
