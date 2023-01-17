#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int, int > mp;
    for(int i =0 ; i < n ; i++)
    {
        int x;
        cin>>x;
        mp[x]++;
    }
    int mx = 1;
    for(auto f : mp)
    {
        mx = max(mx , f.second);
    }
    cout<<mx<<endl;
}
