#include<stdio.h>
int main()
{
    int a=0,b=0,i,j,k=0,l=0;
    char A[10];
    for(i=0;i<8;i++)
    {
        scanf("%s",&A);
        for(j=0;j<8;j++)
        {
            if(A[j]>='A'&&A[j]<='Z')
            {
                if(A[j]=='Q')
                    a+=9;
                else if(A[j]=='R')
                    a+=5;
                else if(A[j]=='B')
                    a+=3;
                else if(A[j]=='N')
                    a+=3;
                else if(A[j]=='P')
                    a=a+1;
            }
            else if(A[j]>='a'&&A[j]<='z')
            {
                if(A[j]=='q')
                    b+=9;
                else if(A[j]=='r')
                    b+=5;
                else if(A[j]=='b')
                    b+=3;
                else if(A[j]=='n')
                    b+=3;
                else if(A[j]=='p')
                    b+=1;
            }
        }
    }
    if(a>b)
        printf("White\n");
    else if(b>a)
        printf("Black\n");
    else
        printf("Draw\n");
    return 0;
}
