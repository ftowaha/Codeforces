#include<stdio.h>
int main()
{
    int n,i,j,b,a[2]={0,0};
    for(i=0;i<2;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&b);
            if(a[i]<b)
                a[i]=b;
        }
    }
    printf("%d %d\n",a[0],a[1]);
    return 0;
}
