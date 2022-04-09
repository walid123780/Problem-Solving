#include<bits/stdc++.h>
using namespace std;
int main()
{

    int s,f;
    cin>>s>>f;
    int a[s+1];
    for(int i=0; i<s; i++) cin>>a[i];
    sort(a,a+s);
    int ans[1012]={0},l=0;
    for(int i=0; i<s-1; i++)
    {
        ans[l++]=a[i+1]-a[i];
    }

    double flag=abs(a[0]-0);
    double flag1=abs(f-a[s-1]);

    double anss=*max_element(ans,ans+l);
    double fuck=max(flag,flag1);
    printf("%.10lf\n",max(anss/2,fuck));
    return 0;
}
