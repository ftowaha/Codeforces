#include<stdio.h>
int main()
{
  long long int a,b;
  int x,y=0,k=0;
    scanf("%lld %lld",&a,&b);
    x=b/a;
    if(b%a!=0)
        printf("-1\n");
    else
    {
        while(1)
        {
            if(x<2)
                break;
            if(x%2==0)
                {
                    y++;
                    x=x/2;
                }
            else if(x%3==0)
                {
                    y++;
                    x=x/3;
                }
                else
                {
                    k=1;
                    break;
                }
        }
        if(k==0)
            printf("%d\n",y);
        else printf("-1\n");
    }
    return 0;
}
