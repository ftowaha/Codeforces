#include<stdio.h>
int main()
{
    int n,i;
    int a,b,k,l,j,m;
    char c='a';
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        k=a/b;
        l=a%b;
        m=k*b;
        c='a';
        for(j=1;j<=a;j++)
        {
            if(j<=m)
                printf("%c",c);
            else printf("a");
            if(j%k==0)
                c=c+1;

        }
        printf("\n");
    }
    return 0;
}
