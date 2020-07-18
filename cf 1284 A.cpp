#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,a,b,k,l;
    scanf("%d %d",&n,&m);
    string A[22],B[22];
    for(i=0;i<n;i++)
        cin>>A[i];
    for(i=0;i<m;i++)
        cin>>B[i];
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        cin>>a;
        a--;
        b=a%n;
        a=a%m;
        cout<<A[b]<<B[a]<<endl;
    }
    return 0;
}
