#include<bits/stdc++.h>
using namespace std;
void fast()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int dp[205][205][205],A[205],B[205], C[205];
int solve(int r, int g, int b)
{
    if(min(r,min(g,b))<0)
        return 0;
    if(dp[r][g][b]!=-1)
        return dp[r][g][b];
    int ans=0;
    ans = A[r]*B[g] + solve(r-1,g-1,b);
    ans = max(ans,A[r]*C[b] + solve(r-1,g,b-1));
    ans = max(ans,B[g]*C[b] + solve(r,g-1,b-1));
    ans = max(ans,0);
    cout<<ans<<endl;
    return dp[r][g][b]=ans;
}
int main()
{
    int a,b,c;
    fast();
    memset(dp,-1,sizeof(dp));
    cin>>a>>b>>c;
    for(int i=0;i<a;i++)
        cin>>A[i];
    for(int i=0;i<b;i++)
        cin>>B[i];
    for(int i=0;i<c;i++)
        cin>>C[i];
    sort(A,A+a);
    sort(B,B+b);
    sort(C,C+c);
    cout<<solve(a,b,c)<<endl;
    return 0;
}
