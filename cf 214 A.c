#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i=1,a,b,j=0;
    scanf("%d %d",&n,&m);
    if(n>m)
    {
        while(1)
    {
        b=n-(i*i);
        if(((i*i)+b==n)&&((b*b)+i==m))
        j++;

        if(i>sqrt(n))
        break;
        i++;
    }}
    else if(n==1&&m==1)
        j=2;
        else
        {

            while(1)
    {
        b=m-(i*i);
        if(((i*i)+b==m)&&((b*b)+i==n)&&b>=0)
        j++;
        if(i>sqrt(m))
        break;
        i++;
    }
        }

    printf("%d\n",j);
    return 0;
}
