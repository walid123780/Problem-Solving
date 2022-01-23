#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100],temp;
    cin>>s;
    int a,b;
    cin>>a>>b;
    swap(a,b);
    temp=s[b-1];
    s[b-1]=s[a-1];
    s[a-1]=temp;
    cout<<s<<endl;








    return 0;
}
