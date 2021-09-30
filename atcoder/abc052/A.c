#include<stdio.h>
int main()
{
   int a,b,c,d,temp=0,sum=0;
   scanf("%d%d%d%d",&a,&b,&c,&d);
   temp=a*b;
   sum=c*d;
   if(temp==sum){
    printf("%d\n",temp);
   }
   else if(temp>sum){
    printf("%d\n",temp);
   }
   else printf("%d\n",sum);



    return 0;
}
