#include<stdio.h>
int main()
{

    char s[4];
    scanf("%s",&s);
    if(s[0]!= s[1] && s[0]!=s[2] && s[1]!= s[2]){
        printf("6");
    }
    else if(s[0] == s[1] && s[0]!=s[2] && s[1]!= s[2] || s[0] != s[1] && s[0] ==s[2] && s[1]!= s[2] || s[0] != s[1] && s[0]!=s[2] && s[1] == s[2]){
        printf("3");
    }
    else if(s[0] == s[1] && s[0] ==s[2] && s[1]== s[2]){
        printf("1");
    }


    return 0;
}
