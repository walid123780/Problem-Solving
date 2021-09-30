#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101],c[101],s[101];
    int i;
    gets(s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]==','){
        s[i]=' ';
        }
    }
    puts(s);
    return 0;
}
