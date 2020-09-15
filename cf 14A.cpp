#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k=0,l=0,x,y;
    scanf("%d %d",&n,&m);
    k=n;
    l=m;
    x=0;
    y=0;
    string A[n];
    for(i=0;i<n;i++)
        cin>>A[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            {
                if(A[i][j]=='*')
                {
                    if(k>j)
                        k=j;
                    if(l>i)
                        l=i;
                    if(x<j)
                        x=j;
                    if(y<i)
                        y=i;
                }
            }
    }
    printf("%d %d %d %d\n",k,l,x,y);
    for(i=l;i<=y;i++)
    {
        for(j=k;j<=x;j++)
            printf("%c",A[i][j]);
        printf("\n");
    }
    return 0;
}
