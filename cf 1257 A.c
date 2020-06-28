#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,x,a,b,c,d,e;
 	scanf("%d",&t);
 	for(int i=0;i<t;i++)
{
  	scanf("%d%d%d%d",&n,&x,&a,&b);
  	c= abs(a-b);
  	d=x+c;
  	if(d>=n)
   		printf("%d\n",n-1);
  	else
   		printf("%d\n",d);
 }
    return 0;
}
