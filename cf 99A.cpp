#include<bits/stdc++.h>
using namespace std;
int main()
{
    string A;
    cin>>A;
    char a;
    int b=A.size(),i=0,c;
    for(i=0;i<b;i++)
    {
        if(A[i]=='.')
        {
            c=i;
            break;
        }
    }
    //printf("%c\n",A[c-1]);
    if(A[c-1]=='9')
        cout<<"GOTO Vasilisa."<<endl;
    else
    {
        if(A[c+1]>=53 && A[c+1]<=57)
        {
        A[c-1]=A[c-1]+1;
        }
        for(i=0;i<c;i++)
            cout<<A[i];
    }
    return 0;
}
