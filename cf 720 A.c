#include<stdio.h>
int main()
{
    int n,i,k=1,a,b=0,l=1;
    scanf("%d%d",&n,&a);
    for(i=1;i<n;i++)
    {
        b=a;
        scanf("%d",&a);
        if(a>b)
            k++;
        else k=1;
        if(k>l)
            l=k;
    }
    printf("%d\n",l);
    return 0;
}
