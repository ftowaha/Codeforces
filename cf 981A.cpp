#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
   char A[55],B[55];
   cin>>A;
   strcpy(B,A);
   strrev(B);
   int n=1,i,b=strlen(A);
   //printf("%d\n",b);
   for(i=1;i<b;i++)
   {
       if(A[i]!=A[i-1])
        n++;
   }
   if(n==1)
    printf("0\n");
   else if(strcmp(A,B)==0)
    printf("%d\n",b-1);
   else printf("%d\n",b);
   return 0;
}
