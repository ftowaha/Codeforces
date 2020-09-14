#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,b,j,c=0,d=65;
    scanf("%d %d",&a,&b);
    int B[b]={0};
    char A[a];
    scanf("%s",&A);
    sort(A,A+a);
    for(i=0;i<a;i++)
    {
        if(A[i]==d)
            B[c]++;
        else
        {
            c++;
            d++;
            B[c]++;
            //printf("%c\n",A[i]);
        }
    }
    //printf("%d %d %d",B[0],B[1],B[2]);
    j=B[0];
    for(i=1;i<b;i++)
    {
        j=min(B[i],j);
    }
    printf("%d\n",j*b);
    return 0;
}
