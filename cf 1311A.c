#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,a,b,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
       c=a-b;
       if(c==0)
        printf("0\n");
       else if(c>0)
       {
           if((a%2==0 && b%2==0)||(a%2!=0 && b%2!=0))
              printf("1\n");
            else printf("2\n");
       }
       else if(c<0)
       {
           if((a%2==0 && b%2==0)||(a%2!=0 && b%2!=0))
              printf("2\n");
            else printf("1\n");
       }
    }
    return 0;
}
