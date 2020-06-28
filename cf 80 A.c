#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int a,b,c,i,j,k=0;
    scanf("%d %d",&a,&b);
    for(i=a+1;i<=b;i++)
    {
        c=i;
        k=0;
        for(j=2;j<=sqrt(c);j++)
        {
            if(c%j==0)
            {
                k=1;
                break;
            }
        }
        if(k==0)
            break;
    }
    if(k==0&&i==b)
        printf("YES\n");
    else printf("NO\n");
    return 0;
}
