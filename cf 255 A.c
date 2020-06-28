#include<stdio.h>
int main()
{
    int n,i,k,l,m,x=0,y=0,z=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i%3==0)
        {
            scanf("%d",&k);
            x=x+k;
        }
        else if(i%3==1)
        {
            scanf("%d",&l);
            y=y+l;
        }
        else
        {
            scanf("%d",&m);
            z=z+m;
        }
    }
    if(z>x&&z>y)
        printf("back\n");
    else if(y>x)
        printf("biceps\n");
    else printf("chest\n");
    return 0;
}
