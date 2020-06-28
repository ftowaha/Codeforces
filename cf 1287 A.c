#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,k=0,l=0,m=0,a,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        char A[a];
        scanf("%s",&A);
        m=0;
        for(j=0;j<a;j++)
        {
            l=0;
            if(A[j]=='A')
            {
                for(k=j+1;k<a;k++)
                {
                    if(A[k]=='P')
                        l++;
                    else
                        break;
                }
                if(l>m)
                    m=l;
            }
        }
        printf("%d\n",m);
    }
    return 0;
}
