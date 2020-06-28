#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j=0,k=0,l=0;
    scanf("%d",&n);
    int B[n];
    char A[n];
    scanf("%s",&A);
    for(i=0;i<n;i++)
    {
        if(A[i]=='B')
          k++;
        else if(A[i]!='B'&&k!=0)
        {
            B[l]=k;
            k=0;
            l++;
        }
    }
    if(k!=0)
    {
        B[l]=k;
        l++;
    }
    printf("%d\n",l);
    for(i=0;i<l;i++)
    {
      printf("%d ",B[i]);
    }
    return 0;
}
