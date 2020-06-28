#include<stdio.h>
int main()
{
    int t,n,i,j,a,k=0,l=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        k=0;
        l=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a);
            if(a==0)
            {
                a=1;
                k++;
            }
            l=l+a;
        }
        if(l==0)
            k++;
        printf("%d\n",k);
    }
    return 0;
}
