#include<stdio.h>
int main()
{
    int a,b,t,k=0,l;
    scanf("%d %d",&a,&b);
    while(1)
    {
        if(a<=1&&b<=1)
        break;
        if(a<=2)
       {
           t=a;
           a=b;
           b=t;
       }
       a-=2;
       b++;
       if(a<=1&&b<=1)
        break;
       k++;
    }
    printf("%d\n",k);
    return 0;
}
