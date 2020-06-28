#include<stdio.h>
#include<string.h>
int main()
{
    int i,cnt=0,jump=0;
    char s[105];
    scanf("%s",&s);
    for(i=0; i<strlen(s); i++)
    {
        if(!(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y'))
        {
            cnt++;
            if(cnt>jump)
                jump=cnt;
        }
        else
        {
            cnt=0;
        }
    }
    printf("%d\n",jump+1);
    return 0;
}
