#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<string,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int A,C,G,T;
int Min(){ return min(min(A,C),min(G,T));}

int main()
{
    fast;
//    optimize();

    int n;
    cin>>n;
    string s;
    cin>>s;
    for (int i = 0 ; i < n; i++)
    {
        if(s[i] == 'A') A++;
        else if(s[i] == 'C') C++;
        else if(s[i] == 'G') G++;
        else if(s[i] == 'T') T++;
    }
    for(int i = 0 ; i < n; i++)
        if(s[i] == '?')
            if(A == Min()){s[i] = 'A' ; A++;}
            else if(C == Min()){s[i] = 'C'; C++;}
            else if(G == Min()){s[i] = 'G'; G++;}
            else {s[i] = 'T'; T++;}

    if(A == C && C == G && G == T) cout<<s;
    else cout<<"===";

    return 0;
}
