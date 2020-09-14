#include<bits/stdc++.h>
using namespace std;
int main()
{
    char A[100];
    gets(A);
    int a,i;
    a=strlen(A);
    //printf("%s\n",A);
    for(i=a-1;i>=0;i--)
    {
        if((A[i]>='a'&&A[i]<='z')||(A[i]>='A'&&A[i]<='Z'))
        {
            if(A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U'||A[i]=='Y'||A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'||A[i]=='y')
                printf("YES\n");
            else printf("NO\n");
            break;
        }
    }
    return 0;
}
