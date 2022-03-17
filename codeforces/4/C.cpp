#include<bits/stdc++.h>
using namespace std;
map<string,int>n;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        n[s]++;
        if(n[s]==1)cout<<"OK"<<endl;
        else cout<<s<<n[s]-1<<endl;
    }
    return 0;
}
