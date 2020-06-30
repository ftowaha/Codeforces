#include<cstdio>
using namespace std;
int main()
{
    int n,m,i,j,k=0,l=0;
    scanf("%d %d",&n,&m);
    char A[n];
    int B[m]={0};
    for(i=0;i<m;i++)
    {
        scanf("%s",&A);
        for(j=0;j<n;j++)
        {
            if(A[j]=='0')
            {
                k=1;
                break;
            }
        }
        if(k==1)
            B[i]=1;
        k=0;
    }
    k=1;
    j=0;
    for(i=0;i<m;i++)
    {
        if(B[i]==1)
            j=1;
        if(B[i]==1&&B[i+1]==1)
           k++;
        else if(l<k)
            l=k;
        if(B[i]!=B[i+1])
            k=1;
    }
    if(j==1)
    printf("%d\n",l);
    else printf("0\n");
    return 0;
}
