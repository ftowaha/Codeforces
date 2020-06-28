#include<cstdio>
using namespace std;
int main()
{
    int t,n,i,j,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int A[n];
        k=0;
        long long int m=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[j]);
        }
        for(j=1;j<n;j++)
        {
            if(A[j]%2==0)
                 {
                     printf("1\n%d\n",j+1);
                     k=1;
                     break;
                 }
            else if((A[j]+A[j+1])%2==0&&j<n-1)
                {
                printf("2\n%d %d\n",j+1,j+2);
                k=1;
                break;
                }
            else if((A[j]+A[j+1]+A[j+2])%2==0&&j<n-2)
                 {
                    printf("3\n%d %d %d\n",j+1,j+2,j+3);
                    k=1;
                    break;
                 }
            else k=-1;
        }
        if(k==-1||n==1)
            {
                if(A[0]%2==0)
                    printf("1\n1\n");
                    else if(n==2)
                    {
                        if((A[0]+A[1])%2==0)
                            printf("2\n1 2\n");
                    }
                else printf("-1\n");
            }
    }
        return 0;
}
