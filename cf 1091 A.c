#include<stdio.h>
int main()
{
    int y,b,r,a=0,d=0,c=0;
    scanf("%d %d %d",&y,&b,&r);
    b=b-1;
    r=r-2;
    while(1)
    {
       y--;
       r--;
       b--;
       a++;
       if(y==0||b==0||r==0)
        break;
    }
    printf("%d\n",(3*a)+3);
    return 0;
}
