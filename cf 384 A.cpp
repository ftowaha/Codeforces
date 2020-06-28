#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    int n,i,k,j;
    scanf("%d",&n);
    k=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i%2==0)
            {
              if(j%2==0)
                    k++;
            }
            else
                {
              if(j%2==1)
                    k++;
            }
        }
    }
    printf("%d\n",k);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i%2==0)
            {
              if(j%2==0)
                    printf("C");
              else printf(".");
            }
            else
                {
              if(j%2==1)
                    printf("C");
              else printf(".");
            }
        }
        printf("\n");
    }
    return 0;
}
