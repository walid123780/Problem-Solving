#include<stdio.h>
int main()
{
   char a,b;
   scanf("%c %c",&a,&b);

   if(a=='H'){
    printf("%c",b);
   }
   else if(a=='D'){
       if(b=='D'){
        printf("H");
       }
       else if(b=='H'){
        printf("D");
       }
   }

    return 0;
}
