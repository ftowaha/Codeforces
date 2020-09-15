#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,b,i,j,c=0;
    scanf("%d",&n);
    string A[n];
    for(i=0;i<n;i++)
        cin>>A[i];
    b=A[0].size();
    for(i=0;i<b-1;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(A[j][i]!=A[j+1][i])
                {
                    a=1;
                    break;
                }

            }
            //printf("%c\n",A[j][i]);
            if(a==0)
                c++;
            else break;
        }
        printf("%d\n",c);
    return 0;
}
