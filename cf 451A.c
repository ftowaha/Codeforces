#include<stdio.h>
int main()
{
    int n,m,k=0;
    scanf("%d %d",&n,&m);
    while(1)
    {
        n--;
        m--;
        k++;
        if(n==0||m==0)
            break;
    }
    if(k%2==0)
        printf("Malvika\n");
    else printf("Akshat\n");
    return 0;
}
