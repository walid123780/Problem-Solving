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

int stringTointeger(string str)
{
    int temp = 0;
    for (int i = 0; i < str.length(); i++) {
        temp = temp * 10 + (str[i] - '0');
    }
    return temp;
}
int main()
{
    fast;
//    optimize();
    string  s,t,l;
    cin>>s;
    l =  s;

    int len  = s.size();
     t += (s[0] + 1);
    len -= 1;
    while(len--){
        t += '0';
    }
    int num = stringTointeger(t);
    int num1 = stringTointeger(l);
    cout<<num - num1<<endl;
    return 0;
}
