#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d%d",&a,&b);
        if(a==1 && b==1)printf("0\n");
        else if(min(a, b) == 1)printf("1\n");
        else printf("2\n");
    }
    return 0;
}
