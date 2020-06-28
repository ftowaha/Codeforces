#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    long long int k=0,l,m,a,b;
    for(i=0;i<n;i++)
    {
        k=0;
        l=1;
        m=1;
        scanf("%lld",&a);
        k=(a*(a+1))/2;
        if(a==1)
            l=1;
        else
        {
            while(1)
        {
            m=m*2;
            l=l+m;
            if(m*2>a)
                break;
        }
        }
        k=k-(2*l);
        printf("%lld\n",k);
    }
    return 0;
}
