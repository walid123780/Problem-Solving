#include<stdio.h>
int main()
{
    int n,l,i,a,temp=0,c=0;
    scanf("%d%d",&n,&l);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a);
        if(a<l)
        {
            c++;
        }
    }
    printf("%d",c);
  return 0;
}
