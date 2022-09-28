#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<string,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define nn           "\n"
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector <int >e[200010],Stack;
bool flag[200010];

void DFS(int x,int y)
{

    Stack.pb(x);
    if(x == y)
    {
        for(int i = 0; i < (int)Stack.size(); i++)
        {
            cout<<Stack[i]<<" ";
        }
        return ;
    }
    flag[x] = true;

    if(!e[x].empty())
    {
        for(int v : e[x]){
            if(flag[v] == false)
            {
                DFS(v,y);
            }
        }
    }
    Stack.pop_back();
}

int  main()
{
    fast;
    int n,x,y;
    cin>>n>>x>>y;
    for(int i = 0 ; i < n - 1; i++)
    {
        int a,b;
        cin>>a>>b;
        e[a].pb(b);
        e[b].pb(a);
    }
    DFS(x,y);

    return 0;
}



