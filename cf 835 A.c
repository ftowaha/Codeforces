#include<stdio.h>
int main()
{
    int s,a1,a2,b1,b2,x,y;
    scanf("%d %d %d %d %d",&s,&a1,&a2,&b1,&b2);
    x=(s*a1)+(2*b1);
    y=(s*a2)+(2*b2);
    if(x==y)
      printf("Friendship\n");
    else if(x<y)
    printf("First\n");
    else
    printf("Second\n");
    return 0;
}
