#include<stdio.h>
int main()
{
    int n,i,l;
    long long int a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a);
        l=0;
        while(1)
        {
            if(a%2==0)
            {
                a=a/2;
                l++;
            }
            else if(a%3==0)
            {
                l++;
                a=2*a/3;
            }
            else if(a%5==0)
            {
                a=4*a/5;
                l++;
            }
            else if(a==1)
                break;
            else
            {
                l=-1;
                break;
            }
        }
        printf("%d\n",l);
    }
    return 0;
}
