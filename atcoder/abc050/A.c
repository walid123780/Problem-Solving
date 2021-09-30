#include <stdio.h>
int main()
{
   int first, second, add, subtract;
   char s;
   scanf("%d %c%d", &first,&s,&second);
   if(s=='+'){
    add = first + second;
     printf("%d\n", add);
     return 0;
   }
   else if(s=='-') {
   subtract = first - second;
   printf("%d\n", subtract);
   return 0;
   }

}
