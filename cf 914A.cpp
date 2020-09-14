#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,b=0,k=0;
    cin>>n;
    int A[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    sort(A,A+n);
    for(i=0;i<n;i++)
    {
        k=sqrt(A[i]);
        if(A[i]<0)
            b=A[i];
        else if(k*k!=A[i])
            b=A[i];
    }
    printf("%d\n",b);
    return 0;
}
