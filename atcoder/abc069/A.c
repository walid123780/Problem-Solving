#include<stdio.h>
int main()
{

   int a,b,i,temp=0;
   scanf("%d%d",&a,&b);
   b=b-1;
   for(i=2;i<=a;i++){
    temp=temp+b;
   }
   printf("%d\n",temp);


    return 0;
}


