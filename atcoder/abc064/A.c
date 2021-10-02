#include<stdio.h>
int main()
{

    int a,b,c;
    int x=0,y=0,z=0;
    scanf("%d%d%d",&a,&b,&c);
    x=a*100;
    y=b*10;

    z=x+y+c;
    if(z%4==0){
        printf("YES");
    }
    else printf("NO");

    return 0;
}
