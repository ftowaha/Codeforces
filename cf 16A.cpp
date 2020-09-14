#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,b=0;
    scanf("%d %d",&n,&m);
    char A[n],x,y;
    for(i=0;i<n;i++)
    {
        scanf("%s",&A);
        x=A[0];
        for(j=0;j<m-1;j++)
        {
            if(A[j]!=A[j+1])
            {
                b=1;
                printf("%d %d\n",i,j);
                break;
            }
        }
        if(i>0&&x==y)
        {
            printf("%d %d\n",i,j);
            b=1;
        }
        y=x;
        if(b==1)
            break;
    }
    if(b==1)
        printf("NO\n");
    else printf("YES\n");
    return 0;
}
