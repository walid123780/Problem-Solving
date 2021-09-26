#include<stdio.h>
int main()
{
   int a,b,c,i,t=0;
   scanf("%d%d%d",&a,&b,&c);
   for(i=1;c<=b;i++){
    if(c>=a&&c<=b){
        t=1;break;
    }
    c=c+c;
   }
    if(t==1)printf("%d", c);
    else printf("-1");


    return 0;
}
