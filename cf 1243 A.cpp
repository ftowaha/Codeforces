#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int n,i,t,b,c,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t);
        int A[t],j;
        for(j=0;j<t;j++)
        {
            scanf("%d",&A[j]);
        }
        sort(A,A+t);
        b=0;
        d=0;
        for(j=t-1;j>=0;j--)
            {
                b++;
                if(b>=A[j])
                 c=A[j]*A[j];
                else c=b*b;
                //printf("%d\n",c);
                if(d<=c)
                    {
                        d=c;
                        //printf("%d\n",d);
                    }
            }
            d=sqrt(d);
            printf("%d\n",d);
    }
    return 0;
}
