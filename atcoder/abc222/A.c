#include<stdio.h>
#include<string.h>
int main()
{

    char s[10001];
    scanf("%s",s);
    int len=0;
    len=strlen(s);
    if(len==1)
    {
        printf("000%s\n",s);
    }
    else if(len==2)
    {
        printf("00%s\n",s);
    }
    else if(len==3)
    {
        printf("0%s\n",s);
    }
    else  printf("%s\n",s);

    return 0;
}
