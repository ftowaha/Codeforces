#include<stdio.h>
int main()
{
    int n1,n2,k1,k2;
    scanf("%d %d %d %d",&n1,&n2,&k1,&k2);
    if(n1+k1>n2+k2)
        printf("First\n");
    else printf("Second\n");
}
