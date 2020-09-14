#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int A[n],a=0,b=100,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        if(a<A[i])
            a=A[i];
        if(b>A[i])
            b=A[i];
    }
    a=a+b;
    for(i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[i]+A[j]==a)
            {
                printf("%d %d\n",i+1,j+1);
                A[i]=-1;
                A[j]=-1;
                break;
            }
        }
    }
    return 0;
}
