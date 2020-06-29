#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int k,l,m,n,x,y;
    char A[2],B[2];
    scanf("%s %s",&A,&B);
    k=A[0]-'a'+1;
    l=B[0]-'a'+1;
    m=A[1]-'0';
    n=B[1]-'0';
    k=k-l;
    n=m-n;
    l=abs(k);
    m=abs(n);
    if(l>=m)
    x=l;
    else
    x=m;
    //x=abs(x);
    printf("%d\n",x);
    while(1)
    {
        if(k==0&&n==0)
        break;
        if(k>0)
        {
            printf("R");
            k--;
        }
        else  if(k<0)
        {
            printf("R");
            k++;
        }
        if(n>0)
        {
            printf("D");
            n--;
        }
        else  if(n<0)
        {
            printf("U");
            n++;
        }
        printf("\n");
    }
    return 0;
}
